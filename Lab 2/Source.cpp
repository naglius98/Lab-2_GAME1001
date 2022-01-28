//Gianmarco Nagliati Bravi
//Lab 2
//January 28. 2021

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float Number1; //float allows for more than 1 decimal number
	float Number2;
	float Number3;
	cout << "This program shows the use of variable with decimal places, and how to get input from the user." << endl;
	cout << "Please enter the values of your 3 variables:" << endl;
	cin >> Number1;
	cin >> Number2;
	cin >> Number3;

	cout << "Your values are:" << endl << Number1 << endl << Number2 << endl << Number3 << endl << endl; //used to test if input was received properly

	cout << "I will now demonstrate the sum, product and average of the 3 values:" << endl;
	cout << "The sum is equal to: " << Number1 + Number2 + Number3 << endl << endl;
	cout << "The product is equal to: " << Number1 * Number2 * Number3 << endl << endl;
	cout << "The average is equal to: " << (Number1 + Number2 + Number3) / 3 << endl;

	system("Pause");
	return 0;

}