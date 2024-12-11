// A program to display the operation of pre and post increment and decrement.

#include<iostream>      // Preprocessive directive to include input and output streams.
using namespace std;    // Defining the context in which names are defined.
// Main function, entry point.
int main() {
	cout << "\tPRE and POST Increment\n";
	int a, b, x, y;      // Declared 4 int data type variables a, b, x and y. 
	a = b = x = y = 0;   // Assiged all the four variable to 0.
	a++;                 // Incrementing "a" by 1 and wow the value of "a" is 1.
	b = a;               // The value of "a" which is 1, assigned to the variable "b" and now the value of "b" is 1.
	++x;                 // By pre increment operator incrementing the value of "x" by 1.
	y = x;               // Assigning the value of "x" which is 1 to "y". 
	cout << "\t     a = " << a << endl << "\t     b = " << b << endl;    // Displaying the value of "a" and "b".
	cout << "\t     x = " << x << endl << "\t     y = " << y << endl;    // Displaying the value of "x" and "y".
	cout << "\n\n_________________________________________\n";
	cout << "\tPRE and POST Decrement\n"; // A simple message on the concole output.
	int c, d, i, j;      // Declaring 4 int data tpye variables, c, d, i and j.
	c = d = i = j = 0;   // Asssiged all to zero.
	d = c--;             // Here 1stly assigning the value of "c" which is 0 to "d" and then incrementing it by post increment operator by 1. 
	j = --i;             // Here 1stly incrementing the value of "i" to 1 by pre post decrement opertor and then assigning to "j".
	cout << "\t     c = " << c << endl << "\t     d = " << d << endl;  // Displaying the value of "c" and "d".
	cout << "\t     i = " << i << endl << "\t     j = " << j << endl;  // Displaying the value of "i" and "j".
	system("pause");   // Temporarily stops the operations when executed. 
	return 0;          // Return integer value 0 to the main function.
}