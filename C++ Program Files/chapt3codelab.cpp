#include <iostream>
#include <string>
using namespace std;

int main()
{
	string month1, month2, month3;
	double month1Num, month2Num, month3Num;
	double average;
	
	cout << "Please enter the first month: ";
	getline (cin, month1);
	
	cout << "What's the amount of rain for " << month1 << "? ";
	cin >> month1Num;
	cin.ignore();
	
	cout << "Please enter the second month: ";
	getline (cin, month2);
	
	cout << "What's the amount of rain for " << month2 << "? ";
	cin >> month2Num;
	cin.ignore();
	
	cout << "Please enter the third month: ";
	getline (cin, month3);
	
	cout << "What's he amount of rain for " << month3 << "? ";
	cin >> month3Num;
	cin.ignore();
	
	average = (month1Num + month2Num + month3Num) / 3;
	cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << ".";
	
	return 0;	
}
