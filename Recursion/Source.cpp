#include <iostream>
using namespace std;

int factorial(int num) {
	if (num <= 0)
		return 1;
	return factorial(num - 1) * num;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	

	cout << "¬ведите число: ";
	cin >> n;
	cout << n << "! = " << factorial(n) << "\n";




	return 0;
}