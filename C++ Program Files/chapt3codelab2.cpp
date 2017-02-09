#include <iostream>
using namespace std;

int main()
{
	int input;
	int ones, tens, hundreds, sum = 0;
	
	cout << "Enter a number between 0 and 1000: ";
	cin >> input;
	
	ones = input % 10;
	tens = (input / 10) % 10;
	hundreds = (input / 100);
	
	sum = ones + tens + hundreds;
	
	cout << "The sum of the digits is: " << sum << endl;
		
	return 0;
}//end main
