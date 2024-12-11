// A program to check oveerflow/underflow during various arithmetical operation.

#include<iostream>      // Preprocessive directive to include input and output streams.
using namespace std;    // Defining the context in which names are defined.
// Main function, entry point.
int main() {
	cout << "\tOVERFLOW\t\n";
	short numberForTestingOverflow = 32767; // Assinged the maximum value a short data type variable can store.
	cout << "The value before overflowing...\n";
	cout << numberForTestingOverflow << endl;
	cout << "The value after overflowing...\n";
	numberForTestingOverflow = numberForTestingOverflow + 1; // Incrementing the value of short variable by 1.
	cout << numberForTestingOverflow << endl;
	cout << "\n\n________________________________________________\n";
	cout << "\tUNDERFLOW\t\n";
	unsigned numberForTestingUnderflow = 0; // Assigned the least value of the unsigned data type variable which can store.
	cout << "The value before underflowing..\n";
	cout << numberForTestingUnderflow << endl;
	cout << "The value after underflowing...\n";
	numberForTestingUnderflow -= 1; // Decrementing the value of unsigned variable by 1.
	cout << numberForTestingUnderflow << endl;
	system("pause");   // Temporarily stops the operations when executed. 
	return 0;    // Return integer value 0 to the main function.
}