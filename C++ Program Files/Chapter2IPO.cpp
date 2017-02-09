//Mike Bechtel - CSC134-62 - Chapter2 IPO Chart Program
/*
	This program will calculate and display the number of feet and inches
	given a user's input in inches
*/

#include <iostream>
using namespace std;

int main()
{
	int userInches, numFeet, numInches;
	
	cout << "Please enter your height, in inches: " << endl;
	cin >> userInches;
	
	numFeet = userInches / 12;
	numInches = userInches % 12;
	
	cout << userInches << " inches is equal to: " << endl;
	cout << numFeet << " Feet " << numInches << " Inches"<< endl;
	return 0;
}
