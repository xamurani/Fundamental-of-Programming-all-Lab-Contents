#include<iostream>      // Preprocessor Directives used to include input and output streams.
using namespace std;    // We use the namespace named std.
// The starting point for program execution, main().
int main() {
	int testObtainedMarks[5], averageMarks=0; // Delcared an int array named testobtainedMark of size 5 for storing the test marks.
	// Storing values in the array, testObtainedMarks.
	for (int i = 0; i < 5; i++) {
		if (i == 0) {
			cout << "Enter the Marks of First Test :";     
			cin >> testObtainedMarks[i];     // Getting the first test.              
		}
		else if (i == 1) {
			cout << "Enter the Marks of Second Test :";   
			cin >> testObtainedMarks[i];     // Getting the second test.
		}
		else if (i == 2) {
			cout << "Enter the Marks of Third Test :";    
			cin >> testObtainedMarks[i];     // Getting the third test.
		}
		else if (i == 3) {
			cout << "Enter the Marks of Fourth Test :";   
			cin >> testObtainedMarks[i];     // Getting the fourth test.
		}
		else {
			cout << "Enter the Marks of Last Test :";   
			cin >> testObtainedMarks[i];     // Getting the fifth test.
		}
		averageMarks = averageMarks + testObtainedMarks[i]/5.0;// Calculating the average marks obtained by a student in five tests.
	}
	cout << "The average marks obtained by a student in five tests is " << averageMarks << endl;
	system("pause");    // Pause the system/
	return 0;           // Return 0 to calling point.
}