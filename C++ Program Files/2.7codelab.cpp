//Calculate ocean levels given specific information
#include <iostream>
using namespace std;

int main()
{
	int currentLevel = 0;
	double fiveYear, sevenYear, tenYear;
	double rate = 1.5;
	
	fiveYear = currentLevel + (5 * rate);
	sevenYear = currentLevel + (7 * rate);
	tenYear = currentLevel + (10 * rate);
		
	cout << "In 5 years the ocean's level will be higher by "<< fiveYear <<" millimeters." << endl;
	cout << "In 7 years the ocean's level will be higher by "<< sevenYear <<" millimeters." << endl;
	cout << "In 10 years the ocean's level will be higher by "<< tenYear <<" millimeters." << endl;
	
}
