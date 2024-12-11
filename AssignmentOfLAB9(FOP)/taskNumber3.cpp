#include<iostream>
using namespace std;
// A function to convert decimal number to binary number.
int decimalNumberCalculation(int n) {
	int binary = 0, i = 1; 
	if (n == 0) {
		cout << n << " ,itself is a binary number!";
	}
	else {
		while (n != 0) {
			binary = binary + (n % 2) * i;
			n = n / 2;
			i = i * 10;
		}
	}
	return binary;
	}
    int main() {
	int decimalNumber;
	cout << "Enter a decimal number to convvert it into binary number :";
	cin >> decimalNumber;
	cout << decimalNumber << " into Binary Number is equal to " << decimalNumberCalculation(decimalNumber) << ".\n";
	system("pause");
	return 0;
}