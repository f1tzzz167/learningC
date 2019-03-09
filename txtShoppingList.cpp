/*
File Name: Shopping list
Written by: Ryan Fitzgerald
Description: Creates and stores a shopping list
Challenges: Figuring out when to open/close files to make the list actually work.
Time Spent: 4+ hours (20 minutes of writing, 4 hours of corrections)
Given Input: (3 sets)         Expected Output: (3 corresponding sets)
--------------------          -------------------------
1)	3	apples
2)	2	oranges
3)	4	pears
Revision History
Date:        Revised By:     Action:
 ------------------------------------------------------------------
 10/25/17    (RDF)  Original Write
 10/26/17	 (RDF)	About 100 different combinations of open/closing files
 10/27/17    (RDF)	Open file before loop, close file after loop.
*/
#include <iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

int main ( ) 
{ 
	//declare variables
	string item;
	int q, num;
	num = 0;
	char choice;
	ofstream outfile;
	ifstream infile;	
	//begin loop	
	outfile.open("shopping.txt");
	do
	{
		//open file
		num++;
		
		cout<<"Add an item to your shopping list\n";
		cin>> item;
		cout<<"How many "<<item<<" would you like to buy?\n";
		cin>> q;
		outfile << q <<"\t"<< item <<endl;
		cout<<"Would you like to add more items? Y/N?\n";
		cin>>choice;
	}while(choice != 'n' && choice != 'N');
	outfile.close();
	system("pause");
	infile.open("shopping.txt");
	for(num !=0; num > 0; num--)
	{
		infile >> q >> item;
		cout<<q<<"\t"<<item<<endl;
	}
	infile.close();
	return 0;
}
