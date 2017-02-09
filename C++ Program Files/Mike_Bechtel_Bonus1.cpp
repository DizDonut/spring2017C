//Mike Bechtel - CSC134_62 - Chapter 2 Programming Practice (Extra Credit)
/*
	This program will calculate the number of acres
	in a given plot of land
*/

#include <iostream>
using namespace std;

int main()
{
	const double ACRE =  43560;
	double landSqft = 391876;
	
	double acres = landSqft / ACRE;
	
	cout << "There are "<< acres << " acres in " << landSqft << " square feet of land." << endl;
	return 0;
}

