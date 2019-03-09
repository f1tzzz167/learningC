/*File Name: Area of a Triangle
Written by: Ryan Fitzgerald
Description: Program to find area of a triangle
Challenges: Using a float constant with integers
Time Spent: 30 minutes
Given Input: (3 sets)         Expected Output: (3 corresponding sets)
--------------------          -------------------------
1) 4, 5							10
2)3, 6 							9
3)17.5, 24						210
Revision History
Date:        Revised By:     Action:
 ------------------------------------------------------------------
09/17/2017	RDF		Origininal 
09/18/2017	RDF		Improved UI with more explicit instruction
*/
//include library and standard namespace
#include <iostream>
using namespace std;
//main function
int main()
{
	//declare variables
	double area, base, height;
	//declare and define constant
	const double half = 1.0/2;
	//promt user input
	cout<<"Enter base of triangle:\n";
	//accept user input
	cin>> base;
	//same as above, separated out for 
	cout<<"Enter height of triangle:\n";
	cin>>height;
	//calculate area
	area = half*base*height;
	//display results to the console
	cout<<"The area of a triangle with base of "<<base<<" and height of "<<height<<" is "<<area;
	//return
	return 0;
}
	
