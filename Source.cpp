/*
Kevin Lehman  - 1463553
Tarrant County College - COSC 1437- Fall 2017
Assignment 3 - Week 5
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string numberConvert(float);

int main()
{
	float number;
	char loop = 'Y';

	while (loop == 'Y' || loop == 'y')
	{
		cout << "Enter a number 0.00 to 11.99." << endl;
		cin >> number;
		cout << numberConvert(number) << endl;
		
		cout << "If you would like to enter another value press Y or press X to exit." << endl;
		cin >> loop;
	}

	system("PAUSE");
	return 0;
}

string numberConvert(float number)
{
	int singles = int(number);
	int cents = 100 * (number - singles);
	string centsS = to_string(cents);
	string lead[12] = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven" };
	string dollars = " dollars and ";
	string cent = " cents.";
	string combo;

	if (singles >= 0 && singles <= 11)
	{
		combo.append(lead[singles]);
		combo.append(dollars);
		combo.append(centsS);
		combo.append(cent);
	}
	
	return combo;
}