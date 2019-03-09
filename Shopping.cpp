//Program keeps a running total of all purchases.
/* Use a While or a Do While statement. 

    Create a 'shopping spree' program (similar to one you did earlier).  
    Ask the user keep entering the amount of each purchase, until 0 is typed in. 
    Keep a running total of purchases. 
    Display that total after each purchase.
    Display the grand total at the end. 
    The user should be able to use this program to total any number of purchases. (There is no limit!)  
    There should be only one purchase (price) variable!
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double price = 0;
	double total = 0;
	
	do
	{
		cout<<"Please enter the price of your item\n";
		cout<<"Enter 0 when finished\n";
		cin>>price;
		total += price;
		cout<<"Your current total is:\n";
		cout<<"$"<<total<<endl;		
	}while(price != 0);
	cout<<"Your total is:\n";
	cout<<"$"<<total;
	return 0;
}
