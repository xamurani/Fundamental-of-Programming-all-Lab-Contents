#include<iostream>
using namespace std;
int main()
{
	cout << "Welcome to NUMBER GUESSING GAME.\n";
	int secretNumber = 9, guessedNumber;
	cout << "I have chosen a number between 1 to 10. Try to guess it\n";
	do {
		cout << "Your Guess: ";
		cin >> guessedNumber;
		if (guessedNumber == secretNumber) {
			cout << "That's right! You guessed it.\n";
		}
		else {
			cout << "That is incorrect! Try again.\n";
		}
	} while (guessedNumber != secretNumber);


	system("pause");
	return 0;
}