#include<iostream>      // Preprocessor Directives used to include input and output streams.
using namespace std;    // We use the namespace named std.
void arrayInput();      // Function Prototype used when a fuction is declared after main() function. 
// The starting point for program execution, main().
int main() {
	arrayInput();       // Calling the User defined fuction, arrayInput.

	system("pause");    // Pause the system
	return 0;           // Return 0 to calling point.
}
// void function means no return value.
void arrayInput() {
	int smallestAndLargest[5], smallest, largest;  // Declared smallestAndLargest array with size, 5. smallest & largest are declared to store their very values. 
	// Inputting values in the array by User.
	for (int i = 0; i < 5; i++) {
		cout << "Enter a value in array :";
		cin >> smallestAndLargest[i];
	}
	smallest = smallestAndLargest[0]; // Considering the 1st value of array, the smallest one.
	largest = smallestAndLargest[0];  // Also considering the 1st value of array, the largest one.
	// Checking each value of array for the smallest and largest one.
	for (int j = 0; j < 5; j++) {
		if (smallest >= smallestAndLargest[j]) {
			smallest = smallestAndLargest[j];
		}
		if (largest <= smallestAndLargest[j]) {
			largest = smallestAndLargest[j];
		}
	}
	cout << "The smallest and largest number from the aboved array are " << smallest << " and " << largest << endl;   // Displaying the final value.
}