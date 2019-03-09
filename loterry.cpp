/*Ryan Fitzgerald
Lottery
Play your luck in a game of chance
ordering "if" conditions was difficult, but accomplished through moving around braces
program written in about 30 minutes
8/01/2017*/
#include <iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<time.h>
using namespace std;

int main()
{
int luckyNumbers[5];
int playerNumbers[5];
int count = 0;

for(int w = 0; w < 5; w++)	
{
	luckyNumbers[w] = rand() % 10;
}
for(int w = 0; w < 5; w++)
{
cout<<"Please enter your lucky numbers!"<<endl;
	cin>>playerNumbers[w];
	if (playerNumbers[w] > 9, playerNumbers[w] < 0)
	{
		cout<< "Number outside the range of numbers"<<endl;
		cin>>  playerNumbers[w];
	}
}
cout<< "Today's Lucky Numbers:"<<endl;
for(int w = 0; w <5; w++)
cout<<luckyNumbers[w]<<endl;
cout<<"Your Matching Numbers:";
for(int w = 0; w < 5; w++)
{
	if(luckyNumbers[w] == playerNumbers[w])
	cout<<luckyNumbers[w]<<"";
	count++;

if(count == 0)
cout<<"\nNo Matches, Try again next time."<<endl;
else if(count == 5)
cout<<"\nIT'S YOUR LUCKY DAY! YOU WIN!"<<endl;
else
cout<<count<<"\n digits matched."<<endl;
return 0;
}
}
