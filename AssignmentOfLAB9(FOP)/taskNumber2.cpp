#include<iostream>      // Preprocessive directive to include input and output streams.
using namespace std;    // Defining the context in which names are defined.
// A function Fibonacci which calculates the Fibonacci number in series
void fibonacci(int& num) {
	int firstValue = 0, secondValue = 1, next; 
	for (int i = 0; i < num; i++) {
		cout << firstValue << endl;       // Displaying the first fibonacci number.
		next = firstValue + secondValue;  // Calculating the next number.
		firstValue = secondValue;         // Arraning them for the next.
		secondValue = next;               // Arraning them for the next.
	}
}
// Main function, entry point.
int main() {
	int terms; // Declared terms variable of data type of int   
	cout << "Enter the number of terms to be printed in the fibonacci series :";  // Asking the user to enter how many fibonacci numbers he or she needs.
	cin >> terms;    // Storing the inputed value in num here.
	fibonacci(terms);  // Calling the function and passing num variable by adress.
	system("pause");   // Temporarily stops the operations when executed. 
	return 0;    // Return integer value 0 to the main function.
}
