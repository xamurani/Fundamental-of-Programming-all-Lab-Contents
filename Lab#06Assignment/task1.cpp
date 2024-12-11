#include<iostream>
using namespace std;
int main()
{
	int pin = 29202, entry, tries = 0;
	cout << "Welcome to NBC Bank\n\n";
	cout << "Enter your Pin: ";
	cin >> entry;
	tries++;
	while (entry != pin && tries < 4)
	{
		cout << "Your pin is incorrect, please try again! \n";
		cout << "Enter your pin: ";
		cin >> entry;
		tries++;
	}
	int triesCounter = tries;
	if (entry == pin && tries <= 3)
	{
		cout << "Your pin is correct and you have access to your account.\n";
	}
	else
	{
		cout << "You have entered " << triesCounter << " incorrect pins. So, your account has been locked!\n";
	}
	system("pause");
	return 0;
}
