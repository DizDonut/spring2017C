//Mike Bechtel - Chapter3 Peer Programming Challeng 6
/*
	This program will ask the user how many cookies
	he/she wants to bake and will ouput the necessary
	ingredients and their amounts
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	//declar and initialize constants
	const double SUGAR_PER_COOKIE = 0.031;
	const double BUTTER_PER_COOKIE = 0.021;
	const double FLOUR_PER_COOKIE = 0.057;
	
	//declare variables
	int cookies;
	double sugar, butter, flour;
	
	cout << "How many cookies do you want to bake?   ";
	cin >> cookies;
	
	//calculate number of cups needed for each ingredient
	sugar = cookies * SUGAR_PER_COOKIE;
	butter = cookies * BUTTER_PER_COOKIE;
	flour = cookies * FLOUR_PER_COOKIE;
	
	//setprecision at 2, fixed so only 2 decimal places are displayed
	cout << setprecision (2) << fixed;
	cout << "You need " << sugar << " cups of sugar, " << butter <<
		" cups of butter, and "	<< flour << " cups of flour to make "
		<< cookies << " cookies.";
	
	return 0;
}
