/*File Name: if/else GPA calculator
Written by: Ryan Fitzgerald
Description: GPA calculator 
Challenges: setting up the case ranges and thinking too hard about rounding
Time Spent: 1 hour
Given Input: (3 sets)         Expected Output: (3 corresponding sets)
--------------------          -------------------------
1) 98	Percentage: 98.00%	Grade: A 	Points: 4.00
2) 84.8	Percentage: 84.80%	Grade: B 	Points: 3.00
3) 6	Percentage: 6.00%	Grade: F 	Points: 0.00
Revision History
Date:10/6/17     Revised By: (RDF)    Action:	Original code  
 ------------------------------------------------------------------

*/
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
int main ( ) 
{ 
//declare variables
double percentage, points;
char grade;
int percent;
//prompt user input
cout<<"Please enter the percentage:"<<endl;
cin>> percentage;
//roung to int
percent = percentage + 0.5;
//vailidate input
if(percentage > 0 && percentage < 100)
{
	//begin switch statements
	switch(percent)
	{
case 90 ... 100://A range
{
	grade = 'A';
	points = 4.00;
	break;
}
case 80 ... 89://B range
{
	grade = 'B';
	points = 3.00;
	break;
}
case 70 ... 79://C range
{
	grade = 'C';
	points = 2.00;
	break;
}
case 60 ... 69://D range
{
	grade = 'D';
	points = 1.00;
	break;
}
default://F range
{
	grade = 'F';
	points = 0.00;
	break;
}
}
//set precision
cout<< setprecision(2)<<fixed;
cout<<"Percentage: "<<percentage<<"%"<<"	Grade: "<<grade<<"	Points: "<<points<<endl;
}
//notify user of error
else
{
	cout<<"Invalid grade\n";
}
    system("pause");                     
    return 0;
}
