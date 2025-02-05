// Chapter2Exersice10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iomanip>
#include <iostream>
using namespace std;



int main()
{
	const double miles = 375;
	const double gallons = 15;

		cout << "The amount of miles driven were " << miles << endl;
		cout << "And the amount of gallons used was " << gallons << endl;

		//And then you would get the mpg by dividing the miles by the gallons used

		double MPG = miles / gallons;
		cout << "The miles per gallon or MPG would be " << MPG << endl;
		return 0;







}