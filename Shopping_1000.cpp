//Program keeps a running total of all purchases.
/* Use a While or a Do While statement. 
    
    add the condition that the user can only spend up to $1000
        the loop ends if the user has spent exactly $1000
    a purchase price of 0 still ends the loop, too.
    do not let them purchase anything that would leave the total greater than $1000
        display a message telling them that they don't have enough money to make that purchase
    they must be able to keep spending as long as they have not spent $1000
        this means:  do not end the loop if they try to spend more than $1000
        This one is a little tricky -- it deserves some thought!
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double price = 0;
	double total = 0;
	double difference = 0;
	
	do
	{
		cout<<"Please enter the price of your item\n";
		cout<<"Total must not exceed $1000\nEnter 0 when finished\n";
		cin>>price;
		total += price;
		if(price == 0)
		{
			cout<<"You have finished your shopping spree!\nYour total is $"<<total<<endl;
		}
		else if(total > 1000.00)
		{
			total = total - price;
			difference = 1000 - total;
			cout<<"Max total exceeded. Please do not spend more than $"<< difference<<endl;
		}
		else if(total == 1000.00)
		{
			cout<<"You have reached $1000.00! Shopping spree has ended."<<endl;
		}
		else
		cout<<"Your current total is:\n$"<<total<<endl;
		
	}
	while(total != 1000 && price != 0);

	return 0;
}
