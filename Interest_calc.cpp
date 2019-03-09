/*
File Name: Compound Interest
Written by: Ryan Fitzgerald
Description: Interest Calculator to display a table of compounding values over several years
Challenges: converting the math into actual code that compiled
Time Spent: 1 hour
Given Input: (3 sets)         Expected Output: (3 corresponding sets)
--------------------          -------------------------
1) Year 1	Balance = 1051.25
2) Year 2	Balance = 1105.12
3) Year 3 	Balance = 1161.75
Revision History
Date:        Revised By:     Action:
 ------------------------------------------------------------------
 10/25/17    (RDF)  Original Write
*/
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main ( ) 
{
	//declare variables
	double v, p, r, n, rate;
	int t, weeks, years;
	int year = 1;
	//promt user input
	cout<<"Please input the dollar amount to start with:\n";
	cin>>p;
	cout<<"Please input the interest rate:\n";
	cin>>rate;
	cout<<"Please input the number of years you'll keep the account open:\n";
	cin>>years;
	//behind the scenes calculations
	r = rate/100.00;
	n = year*52;
	//begin loop
	for(year == 1; year <= years; year++)
	{
		t = year;
		v = p*(pow(1+(r/n),(n*t)));
		//display yearly balance
		cout<<"Year "<<year<<"\tBalance = "<<setprecision(2)<<fixed<<v<<endl;
	}
	//close loop and confirm that loop is closed
    system("pause");                     
    return 0;
}
