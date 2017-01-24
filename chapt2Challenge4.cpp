//Mike Bechtel - CSC134_62 - Chapter 2 Programming Challenge Problem 4
/*
	This program will calculate the tax and tip
	on a restaurant bill of $88.67, given specific
	tax and tip percentages
*/

#include <iostream>
using namespace std;

int main()
{
	const double BILL = 88.67;
	const double SALES_TAX = .0675;
	const double TIP = 0.20;
	
	double taxAmt, grossAmt, tipAmt, totalBill;
	
	taxAmt = BILL * SALES_TAX;
	grossAmt = taxAmt + BILL;
	tipAmt = grossAmt * TIP;
	totalBill = tipAmt + grossAmt;
	
	cout << "Meal Charge: $" << BILL << endl;
	cout << "Tax Amount: $" << taxAmt << endl;
	cout << "Gross Amount before Tip: $" << grossAmt << endl;
	cout << "Tip Amount: $" << tipAmt << endl;
	cout << "Total Amount Paid: $" << totalBill << endl;
	
	return 0;
}
