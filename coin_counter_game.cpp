//Name: Ryan Fitzgerald
//Summary: Coin Counting Game, get the total to one dolllar
//Chapter 4 question 9
//Challenge: getting the syntax correct and spelling errors. overcame with viewing examples and spellcheck
//the program took about an hour to complete 
//06/24/2017 Rev. A

/*Program creates a change-counting game that gets the user to enter the number
of coins required to make exactly one dollar*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//define global variables
	const double penniesValue = 0.01, nickelsValue = 0.05;
	const double dimesValue = 0.10, quartersValue = 0.25;
		
		//define required variable datatypes
		double pennies, nickels, dimes, quarters;
		double totalAmount;
		double penniesCost, nickelsCost, dimesCost, quartersCost;
		double dollar = 1.00;
		
		//read number of coin types
		cout<<"\nEnter the nuber of pennies: ";
		cin>>pennies;
		cout<<"\nEnter the nuber of nickels: ";
		cin>>nickels;
		cout<<"\nEnter the nuber of dimes: ";
		cin>>dimes;
		cout<<"\nEnter the nuber of quarters: ";
		cin>>quarters;

		//calculate total for coins
		penniesCost = penniesValue * pennies;
		nickelsCost = nickelsValue * nickels;
		dimesCost = dimesValue * dimes;
		quartersCost = quartersValue * quarters;
		
		//calculate total
		totalAmount = penniesCost + nickelsCost + dimesCost + quartersCost;
		
		//check total value to determine if there is a dollar
		if(totalAmount==dollar)
		cout<<"\nCongratulations!!! You have won The total amount is="<<totalAmount;
		else if(totalAmount>dollar)
		cout<<"\nGiven total amount is more than one dollar. The total amount is="<<totalAmount;
		else
		cout<<"\nGiven total amount was less than one dollar. The total amount is="<<totalAmount;
		
	return 0;
}
