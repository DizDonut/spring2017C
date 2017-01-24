//Mike Bechtel - CSC134_02 - Chapter 2 Programming Challenge Problem 3
/*
	This program will compute the sales tax on a
	$95 purchase, given a certain sales tax %
*/

#include <iostream>
using namespace std;

int main()
{
	int price = 95;
	const double STATE_TAX = 0.04;
	const double COUNTY_TAX = 0.02;
	double state, county, totalTax;
	
	state = price * STATE_TAX;
	county = price * COUNTY_TAX;
	totalTax = state + county;
	
	cout << "Total Purchase Price: $"<< price << endl;
	cout << "State Sales Tax: $"<< state << endl;
	cout << "County Sales Tax: $"<< county << endl;
	cout << "Total tax paid for a purchase of $" << price << " is: $" << totalTax << endl;
	return 0;
}

