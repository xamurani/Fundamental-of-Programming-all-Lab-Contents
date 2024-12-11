#include<iostream>      // Preprocessor Directives used to include input and output streams.
using namespace std;    // We use the namespace named std.
// The starting point for program execution, main().
int main() {
	int arr[10] = { 1,2,3,4,5,60,7,8,9,10 }, maximum;  // Declared and assigned arr of size 10 and maximum for holding the largest number.
	maximum = arr[0];      // Making the 1st value of Array, the largest.
	// Checking by a condition of each element of the array for largest one.
	for (int i = 0; i < 10; i++) {
		if (maximum <= arr[i]) {
			maximum = arr[i];
		}
	}
	cout << "The Largest Element in the array is " << maximum << endl;   // Displaying the final result.
	system("pause");   // Stops the console.  
	return 0;          // Return 0 to the calling point.
}