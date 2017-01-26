//Mike Bechtel - CSC134-62 - Chapter 2 Problem 5
/*
	This program will get the average of a series of values
	and display that average
*/

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	double one = 28, two = 32, three = 37, four = 24, five = 33;
	double sum, average;
	
	//calculate sum and average of variables
	sum = one + two + three + four + five;
	average = sum / 5;
	
	cout<< "The average of the 5 numbers is: " << average;
	
	
	return 0;	
}

