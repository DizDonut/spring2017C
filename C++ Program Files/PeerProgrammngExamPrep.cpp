//Mike Bechtel - CSC143_62 Practice Exam Peer Programming
/*
	This program will calculate a customer's monthly bill, given
	the customer's choice in programming package
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char choice;
	int hours, hoursOverage;
	double monthlyBill;
	const double PACKAGE_A = 9.95, PACKAGE_B = 14.95, PACKAGE_C = 19.95;
	const double OVERAGE_A = 2.00, OVERAGE_B = 1.00;
	
	cout <<"\t\tMonthly Internet Subscriptions\n\n";
	cout <<"Package A:  $9.95 per month for 10 hours of access.  Additional hours are $2.00/Hour.\n";
	cout <<"Package B:  $14.95 per month for 20 hours of access.  Additional hours are $1.00/Hour.\n";
	cout <<"Package C:  $19.95 per month unlimited access is provided.\n\n";
	cout <<"Enter your choice: ";
	cin >> choice;
	
		switch (choice)
		{
			case 'a':
			case 'A':
				cout << "You chose Package A.\n";
				cout << "Estimate how many hours you will use per month: ";
				cin >> hours;
				if (hours > 10)
				{
					hoursOverage = hours - 10;
				}
					else
					{
						hoursOverage = 0;
					}
				monthlyBill = (PACKAGE_A) + (hoursOverage * OVERAGE_A);
				cout << setprecision(2) <<fixed << endl;
				cout << "Monthly Rate:               $" << PACKAGE_A << endl;
				cout << "Monthly Hours Overage:      $" << (hoursOverage * OVERAGE_A) << endl;
				cout << "Estimated monthly bill is:  $" << monthlyBill << endl;
			break;//break case A
		
			case 'b':
			case 'B':
				cout << "You chose Package B.\n";
				cout << "Estimate how many hours you will use per month: ";
				cin >> hours;
				if (hours > 20)
				{
					hoursOverage = hours - 20;
				}
					else
					{
						hoursOverage = 0;
					}
				monthlyBill = (PACKAGE_B) + (hoursOverage * OVERAGE_B);
				cout << setprecision(2) <<fixed << endl;
				cout << "Monthly Rate:               $" << PACKAGE_B << endl;
				cout << "Monthly Hours Overage:      $" << (hoursOverage * OVERAGE_B) << endl;
				cout << "Estimated monthly bill is:  $" << monthlyBill << endl;
			break;//break case B
		
			case 'c':
			case 'C':
				cout << "You chose Package A.\n";
				monthlyBill = (PACKAGE_C);
				cout << setprecision(2) <<fixed << endl;
				cout << "Estimated monthly bill is: $" << monthlyBill << endl;
			break;//break case C
			
			default:
				cout << choice << " is not a valid selection.  Goodbye.\n";
		}//end switch

	return 0;	
}

