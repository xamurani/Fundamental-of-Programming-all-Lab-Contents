#include<iostream>
#include<string>
using namespace std;

int addition(int num1, int num2){
	return num1 + num2;
}
int substraction(int num1, int num2) {
	return num1 - num2;
}
int multiplication(int num1, int num2) {
	return num1 * num2;
}
double division(double num1,double num2) {
	return num1 / num2;
}
int main() {
	int num1, num2;
    char op;
	string check = "yes";
	do {
	    cout << "Enter a number: ";
    	cin >> num1;
    	cout << "Enter another number: ";
        cin >> num2;
    	cout << "Enter an operator: ";
    	cin >> op;
		if (op == '+') {
			cout << "The adition of two number is " << addition(num1, num2) << "." << endl;
		}
		else if (op == '-') {
			cout << "The subtraction of two number is " << substraction(num1, num2) << "." << endl;
		}
		else if (op == '*') {
			cout << "The multiplication of two number is " << multiplication(num1, num2) << "." << endl;
		}
		else if (op == '/') {
			cout << "The division of two number is " << division(num1, num2) << "." << endl;
		}
		else {
			cout << "Invalid Operation!\n ";
		}
		cout << "Do you want to continue: Yes or No?" << endl;
		cin >> check;
	} while (check=="yes");
	system("pause");
	return 0;
}