//2-11 Distance per tank
#include <iostream>
using namespace std;

int main()
{
	const double GALLON = 20;
	const double MPG_TOWN = 23.5;
	const double MPG_HIGHWAY = 28.9;
	
	cout << "Town: "<< MPG_TOWN*GALLON << endl;
	cout << "Highway: " << MPG_HIGHWAY*GALLON << endl;
	
	return 0;
}
