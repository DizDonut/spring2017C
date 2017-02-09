//Mike Bechtel - CSC143_62 -Project 1
/*
	This program will prompt the user to enter the name and address
	of the customer and number of words to be sent via telegram.
	The program will calculate the cost of sending the telegram,
	prompt user for payment, receive payment, and display any change
	due to user.

*/

#include <iostream> //needed for cin/cout class
#include <string>  //needed for string class
#include <iomanip> //needed for output formatting
using namespace std;

int main()
{
	
	//declare and initialize constants
	const double RATE_PER_FIVE = 1.50;
	const double RATE_PER_SINGLE = 0.50;
	
	//declare variables
	string custName, street, city, state, zip;
	int words, blockFiveWords, remSingleWords, payment, change, dollars, quarters, dimes, nickels, pennies;
	double amountDue;
	
	//prompts for input
	cout << "Enter the name of the customer: ";
	getline(cin, custName);
	cout << "Enter the street address: ";
	getline(cin, street);
	cout << "Enter the city: ";
	getline(cin, city);
	cout << "Enter the state: ";
	getline(cin, state);
	cout << "Enter the zip code: ";
	getline(cin, zip);
	cout << "Enter the number of words to be sent: ";
	cin >> words;
	
	//finds the number of 5 blocks of words, then remainder of single words
	blockFiveWords = words / 5;
	remSingleWords = words % 5;
	
	//calculates total amount due
	amountDue = (blockFiveWords * RATE_PER_FIVE) + (remSingleWords * RATE_PER_SINGLE);
	
	//display inputs from user
	cout << endl << custName << endl;
	cout << street << endl;
	cout << city << ", " << state << " " << zip << endl;
	
	//display amount owed, fixed decimal at 2 places
	cout << setprecision(2)<< fixed;
	cout << "Amount Owed: $" << amountDue << endl;
	
	//prompt to enter payment amount in pennies
	cout << endl<< "Enter the amount received from customer: ";
	cin >> payment;
	
	//calculate change due and appropriate amount of each denomination
	change = payment - (amountDue * 100);
	dollars = change / 100; 												//returns the hundredths value, if exists
	quarters = (change % 100) / 25; 										//finds two right most digits and divides by 25
	dimes = ((change % 100) - (quarters * 25)) / 10;						//finds difference between right two most digits and total quarters used, divides by 10 to determin if a dime is needed
	nickels = (change - (dollars*100)-(quarters*25)-(dimes*10)) / 5;		//finds amount not used by dollars, quarters, or dimes and divides by 5
	pennies = change - (dollars*100)-(quarters*25)-(dimes*10)-(nickels*5);	//finds amount not used by dollars, quarters, dimes or nickels
	
	//display change due in appropriate denominations
	cout << endl << left << setw(15) << " Denomination" << right << setw(10) << "Number" << endl;
	cout << left << setw(15) << " ----------- " << right << setw(15)<< " ----------- " << endl;
	cout << " Dollars " << right << setw(15) << dollars << endl;
	cout << " Quarters" << right << setw(15) << quarters << endl;
	cout << " Dimes" << right << setw(18) << dimes << endl;
	cout << " Nickels" << right << setw(16) << nickels << endl;
	cout << " Pennies" << right << setw(16) << pennies << endl;
	
	return 0;
}//end main 	
