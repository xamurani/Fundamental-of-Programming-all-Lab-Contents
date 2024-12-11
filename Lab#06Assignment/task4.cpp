#include<iostream>
using namespace std;
int main() {
	long int number=0, factorial = 1, counter=1;
	cout << "Enter a number for its factorial: ";
	cin >> number;
	while (counter <= number)
	{
		factorial = factorial * counter;
		counter = counter + 1;
	}
	cout << factorial << endl;

	system("pause");
	return 0;
}