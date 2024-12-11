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
	    cout << "Enter 1st number: ";
    	cin >> num1;
    	cout << "Enter 2nd number: ";
        cin >> num2;
    	cout << "Enter an operator: ";
    	cin >> op;
		if (op == '+') {
			cout << "Adition: " << addition(num1, num2) << "." << endl;
		}
		else if (op == '-') {
			cout << "Substraction:  " << substraction(num1, num2) << "." << endl;
		}
		else if (op == '*') {
			cout << "Multiplication: " << multiplication(num1, num2) << endl;
		}
		else if (op == '/') {
			cout << "Division: " << division(num1, num2) << endl;
		}
		else {
			cout << "It is Invalid \n ";
		}
		cout << "Continue......? Yes or No?" << endl;
		cin >> check;
	} while (check=="yes");
	system("pause");
	return 0;
}