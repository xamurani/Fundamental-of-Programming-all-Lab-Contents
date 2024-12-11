#include<iostream>      // Preprocessor Directives used to include input and output streams.
#include<windows.h>     // Used to access the Win32 API functions 
using namespace std;    // We use the namespace named std.
// The starting point for program execution, main().
int main() {
	int c = 0;
	// Using this to change the color of text. 
	while (c < 2) {
		// This function sets the attributes of characters. 
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
		c++; 
	}
	int arr[10];        // Declared array of data type int, named 'arr' and of size 10.
	// Inputting 10 values in the array.
	for (int i = 0; i < 10; i++) {
		cout << "Enter a value in array of index " << i << " :";
		cin >> arr[i];
	}
	// Displaying the entered values in their actual Order.
	cout << "\n\nThe Elements of Array in Actual Order...\n";
	for (int j = 0; j < 10; j++) {
		cout << arr[j] << "\t";
	}
	// Then displaying the values in their reversed Order.
	cout << "\n\nThe Elements of Array in Reversed Order are follows...\n";
	for (int k = 9; k >= 0; k--) {
		cout << arr[k] << "\t";
	}
	cout << endl;     // Used to have the control in next line. 
	system("pause");  // Stops the program in run time. 
	return 0;         // Return 0 to calling point of main(), function.
}