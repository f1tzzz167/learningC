//Program keeps a running total of all purchases.

#include<iostream>
#include<iomanip>
#include <string>
using namespace std;

double getTotal(double[], int);
double getAverage(double[], int);

int main()
{
	cout << fixed << setprecision(2);
	const int ITEMS = 5;
	int i = 0;
	double price[ITEMS];
	string item[ITEMS];
	double total = 0;
	double difference = 0;
	double average = 0;
	
	for(i = 0; i < ITEMS; i++)
	{
		cout<<"Please enter the name of the item you are purchasing:\n";
		cin>>item[i];
		cout<<"Please enter the price of your item\n";
		cout<<"Total must not exceed $1000\n";
		cin>>price[i];
		total += price[i];
		cout<<"Your current total is:\n$"<<total<<endl;
		
		if(total > 1000.00)
		{
			total = total - price[i];
			difference = 1000 - total;
			cout<<"Max total exceeded. Please do not spend more than $"<< difference<<endl;
			cout<<"Please try a different item:\n";
			cin>>item[i];
			cout<<"Price of new item:\n";
			cin>>price[i];
			total += price[i];
			cout<<"Your current total is:\n$"<<total<<endl;
		}
		else if()
	}
	cout<<endl<<endl;
	cout<<"--------------------------------";	
	for(i = 0; i < ITEMS; i++)
	{
		cout<<item[i]<<"\t\t$"<<price[i]<<endl;
	}
	cout<<endl;
	cout<<"Total:\t\t"<<total;

	return 0;
}

double getTotal(double price[], int i)
{
		double total = 0;
		for(int count = 0; count < i; count++)
		total += price[count];
	return total;
}

double getAverage(double price[], int i)
{
		double average = 0;
		double total = 0;
		total = getTotal(price, i);
		average = total/i;		
	return average;	
}
