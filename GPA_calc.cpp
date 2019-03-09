/*File Name: if/else GPA calculator
Written by: Ryan Fitzgerald
Description: GPA calculator 
Challenges: organizing the if/else chain for efficiency
Time Spent: 1 hour
Given Input: (3 sets)         Expected Output: (3 corresponding sets)
--------------------          -------------------------
1) 98	Percentage: 98.00%	Grade: A 	Points: 4.00
2) 84.8	Percentage: 84.80%	Grade: B 	Points: 3.00
3) 6	Percentage: 6.00%	Grade: F 	Points: 0.00
Revision History
Date:10/6/17     Revised By: (RDF)    Action:	Original code  
Date:10/6/17     Revised By: (RDF)    Action:	Reorganized input validation  
 ------------------------------------------------------------------

*/
#include <iostream>
#include<iomanip>
using namespace std;
int main ( ) 
{
//declare variables 
double percentage, points;
char grade;
//prompt and accept input
cout<<"Please enter the percentage:"<<endl;
cin>> percentage;
//validate data
if(percentage > 0 && percentage < 100)
{
//assign grade values based on percentage
if(percentage >= 89.5)
{
	grade = 'A';
	points = 4.00;
}
else if (percentage >= 79.5)
{
	grade = 'B';
	points = 3.00;
}
else if(percentage >= 69.5)
{
	grade = 'C';
	points = 2.00;
}
else if(percentage >= 59.5)
{
	grade = 'D';
	points = 1.00;
}
else
{
	grade = 'F';
	points = 0.00;
}
//set decimal precision
cout<< setprecision(2)<<fixed;
//display results
cout<<"Percentage: "<<percentage<<"%"<<"	Grade: "<<grade<<"	Points: "<<points<<endl;
}
else
{
	//notify user invalid input
	cout<<"Invalid grade\n";
}
    system("pause");                     
    return 0;
}
