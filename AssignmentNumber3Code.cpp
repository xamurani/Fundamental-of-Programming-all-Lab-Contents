#include<iostream>
using namespace std;

double fun(double x)         // Tt is a funtion of one variable.  
{                                
	return x;
}
// The above function means "f(x) = x". 

double sumIntegral(double lowBound, int n, double dx) // User-defined function for integration.
{
	double cumSum = 0;
	for (int i = 0; i < n; i++) {
		double xi = lowBound + i * dx;            // This will give us in ever loop the number x0, x1, x2 and so on.
		double funValue = fun(xi);
		double rectangleArea = funValue * dx;
		cumSum += rectangleArea;
	}
	return cumSum;
}

int main() {
	double lowBound = 4;        // Can also take this from User.    
	double upperBound = 7;      // Can also take this from User.
	int n = 5;               // Interval 
 	double dx = (double)(upperBound-lowBound)/n;   // Taking the derivative.
	double result = sumIntegral(lowBound, n, dx);
	cout << "Integration = " << result << endl;
	system("pause");
	return 0;
}