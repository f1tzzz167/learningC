/*File Name: lucky Number
Written by: Ryan Fitzgerald
Description: Program to find your lucky number
Challenges: remembering ';' 
Time Spent: 20 minutes
Given Input: 04/13/1994         Expected Output: My lucky number is 613
--------------------          -------------------------
1) No input, 				My lucky number is 613 
2)--
3)--
Revision History
Date:        Revised By:     Action:
 ------------------------------------------------------------------
09/17/2017	RDF		Origininal 
09/19/2017	RDF		Edits to header section
*/
//include library and standard namespace
#include <iostream>
using namespace std;
//main function
int main()
{
//declare variables
int lucky;
int month;
int day;
int year;
//define variables
month = 4;
day = 13;
year = 1994;
//calculate
lucky = year*month/day;
//output
cout<< "My lucky number is: "<<lucky;
//return 
return 0;
}
