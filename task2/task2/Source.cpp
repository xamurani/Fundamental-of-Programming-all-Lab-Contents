// A program to check the upper and lower limits of integer.
#include<iostream>      // Preprocessive directive to include input and output streams.
using namespace std;    // Defining the context in which names are defined.
// Main function, entry point.
int main() {
	cout << "Minimum size of int is " << INT_MIN << "." << endl;   // INT_MIN is used to get the minimum value of a signed int object. 
	cout << "Maximum size of int is " << INT_MAX << "." << endl;   // INT_MAX is used to get the maximum value of a signed int object.
	cout << "Minimum size of char is " << CHAR_MIN << "." << endl;  // CHAR_MIN is used to get the minimum value of char data type object.
	cout << "Maximum size of Char is " << CHAR_MAX << "." << endl;   // CHAR_MAX is used to get the maximum value of char data tpye object.
	cout << "Minimum long long size data type is " << LLONG_MIN << "." << endl;  // LLONG_MIN is used to get the minimum value of a long long object.
	cout << "Maximum long long size data type is " << LLONG_MAX << "." << endl;  // LLONG_MAX is used to get the maximum value of a long long object. 
	cout << "The Bits contain in char data type is " << CHAR_BIT << "." << endl;  // CHAR_BIT is used to get the bits of char data type object. 
	cout << "Maximum size of unsigned int is " << UINT_MAX << "." << endl;  // UINT_MAX is used to get the maximum value of a unsigned int object.
	cout << "Minimum size of short is " << SHRT_MIN << "." << endl;     // SHRT_MIX is used to get the minimum value of a short object.
	cout << "Maximum size of short is " << SHRT_MAX << "." << endl;    // SHRT_MAX is used to get the maximum value of a short data type.
	system("pause");   // Temporarily stops the operations when executed. 
	return 0;    // Return integer value 0 to the main function.
}