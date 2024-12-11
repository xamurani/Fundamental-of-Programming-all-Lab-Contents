// A program in C++ to find the size of fundamental data types. 
#include<iostream>      // Preprocessive directive to include input and output streams.
using namespace std;    // Defining the context in which names are defined.
// Main function, entry point.
int main() {
	cout << "The size of \"char\" is " << sizeof(char) << " byte.\n";      // Using "sizeof()" build in function to find the size of char.
	cout << "The size of \"short\" is " << sizeof(short) << " bytes.\n";   // Using "sizeof()" build in function to find the size of short.
	cout << "The size of \"int\" is " << sizeof(int) << " bytes.\n";       // Using "sizeof()" build in function to find the size of int.
	cout << "The size of \"long\" is " << sizeof(long) << " bytes.\n";     // Using "sizeof()" build in function to find the size of long.
	cout << "The size of \"long long\" is " << sizeof(long long) << " bytes.\n";  // Using "sizeof()" build in function to find the size of long long.
	cout << "The size of \"float\" is " << sizeof(float) << " bytes.\n";          // Using "sizeof()" build in function to find the size of float.
	cout << "The size of \"double\" is " << sizeof(double) << " bytes.\n";        // Using "sizeof()" build in function to find the size of double.
	cout << "The size of \"long double\" is " << sizeof(long double) << " byte.\n"; // Using "sizeof()" build in function to find the size of long double.
	cout << "The size of \"bool\" is " << sizeof(bool) << " byte.\n";      // Using "sizeof()" build in function to find the size of bool.
	cout << "The size of \"string\" is " << sizeof(string) << " bytes.\n";  // Using "sizeof()" build in function to find the size of string.
	system("pause");   // Temporarily stops the operations when executed. 
	return 0;    // Return integer value 0 to the main function.
}