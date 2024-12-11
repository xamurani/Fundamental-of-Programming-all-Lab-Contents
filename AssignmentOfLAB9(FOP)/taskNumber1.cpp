// Temperature Conversion

#include<iostream>      // Preprocessive directive to include input and output streams.
using namespace std;    // Defining the context in which names are defined.
float functionCelsius(float& temp);     // Funtion Prototype gives information to the compiler about the structure of it and it is needed when a function is defined after main function.
float functionsFahrenheit(float& temp);  // Funtion Prototype
// Main function, entry point.
int main() {
	float fahrenheit, celsius;   // Two variables of int data type, used to store the data of user when he enters them.
	float temperature;         // Defined a temperature variable of data type of float to store the returing value of the both user-defined fuctions. The functions are given in line#22 and 28.
	cout << "Enter the temperatures in Fahrenheit :"; // Asking the user to enter the temperature in fahrenheit and storing it in variable, fahrenheit, at the next line.
	cin >> fahrenheit; 
	temperature = functionCelsius(fahrenheit); // Assigning temperature to the returning value of functionCelsius and passing fahrenheit arguement by reference.  
	cout << "The temperature in Celsius is equal to " << temperature << ".\n"; // Displaying the final result.
	cout << "_________________________________________________\n"; // Used to indicate the 2nd part of the program.
	cout << "\nEnter the temperature in Celsius :";      // Asking the user to enter the temperature in Celsius and storing it in variable, celsius, at the next line.
	cin >> celsius;
	temperature = functionsFahrenheit(celsius);      // Calling the function and assigning temperature to the returning value of functionCelsius and passing celsius arguement by reference.  
	cout << "The temperature in Fahrenheit is equal to " << temperature << ".\n"; // Displaying the final result. 
	system("pause");   // Temporarily stops the operations when executed. 
	return 0;    // Return integer value 0 to the main function.
}
// Function Celsius returns the Celsius equivalent of a Fahrenheit temperature and passing the value by adress.
float functionCelsius(float& temp) {
	float celsius = 5.0 / 9.0 * (temp - 32);   // Formula
	return celsius;   // returing celsius at calling point of the function.
}
// Functions Fahrenheit returns the Fahrenheit equivalent of a Celsius temperature and passing the value by adress.
float functionsFahrenheit(float& celsius) {
	float fahrenteit = (celsius * 9 / 5) + 32;  // Formula
	return fahrenteit;     // Returning celsius at the calling point of the functioin.
}