// A program to check oveerflow/underflow during various arithmetical operation.

#include<iostream>      // Preprocessive directive to include input and output streams.
using namespace std;    // Defining the context in which names are defined.
// Main function, entry point.
int main() {
	cout << "\tOVERFLOW\t\n";
	short numberForTestingOverflow = 32767; // assinged the maximum value a short variable data type can store.
	cout << "The value before overflowing...\n";
	cout << numberForTestingOverflow << endl;
	numberForTestingOverflow = numberForTestingOverflow + 1; // Incrementing the value of short variable by 1.
	cout << "The value after underflow...\n";
	cout << numberForTestingOverflow << endl;
	system("pause");
	return 0;
}