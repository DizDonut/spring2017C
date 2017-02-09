//Mike Bechtel - Chapter3 Extra Credit Program
/*
	This program will accept a US Dollar amount from
	the user and convert it to both Euros and Yen
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare and intilialize constants
	const double YEN_PER_DOLLAR = 98.93;
	const double EUROS_PER_DOLLAR = 0.74;
	
	//declare variables
	double dollar, yen, euros;
	
	cout << "Please enter the number of US Dollars:  ";
	cin >> dollar;
	
	
	//calculate yen and euros variables based on constants and user input
	yen = dollar * YEN_PER_DOLLAR;
	euros = dollar * EUROS_PER_DOLLAR;
	
	cout << "\nConversion Results" << endl;
	cout << "------------------" << endl;
	
	//set precision to 2 and fixed, giving only 2 trailing decimals
	cout << setprecision(2) << fixed;
	cout << yen << " Yen" << endl;
	cout << euros << " Euros" << endl;
	
	return 0;	
}
