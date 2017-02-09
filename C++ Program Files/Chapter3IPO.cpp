//Mike Bechtel - Chapter3 IPO Problem
/*
	This proram will take an integer from the user (from 1-8)
	and convert it to a binary code
*/
#include <iostream>
using namespace std;

int main()
{
	int num, q1, q2, q3, q4, rem1, rem2, rem3, rem4;
	
	cout << "Enter a whole number from 1-8: ";
	cin >> num;
	
	//calculate remainder and quotient for number given
	
	rem1 = num % 2;
	q1 = num / 2;
	rem2 = q1 % 2;
	q2 = q1 / 2;
	rem3 = q2 % 2;
	q3 = q2 / 2;
	rem4 = q3 % 2;
	
	cout << rem1 << rem2 << rem3 << rem4;	
	
	return 0;
}
