/*Ryan Fitzgerald
Rock, paper, scissors game
Try to beat the computer in a game of chance
Organization of UI was difficult, but accomplished through trial/error
program written in about 45 minutes
7/29/2017*/
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main()
{
	int x;
	unsigned int y;
	do
	{
	y = 1+rand() % 3;
	cout<<"\nRock, Paper, Scissors Game!!!\nPlease select a choice"<<endl;
	cout<<"-----------------------------\nRock: 		1\nPaper:		2\nScissors:	3\nExit:		4\n";
	cin>>x;
		
		if(y == x)
		cout<<"Draw! Try Again.\n";
		else if(y == 1, x == 2)
		cout<<"Paper covers rock, YOU WIN!!!\n";
		else if(y == 1, x == 3)
		cout<<"Rock crushes scissors, you lose.\n";
		else if(y == 2, x == 1)
		cout<<"Paper covers rock, you lose.\n";
		else if(y == 2, x == 3)
		cout<<"Scissors cuts paper, YOU WIN!!!\n";
		else if(y == 3, x == 1)
		cout<<"Rock crushes scissors, YOU WIN!!!\n";
		else if(y == 3, x == 2)
		cout<<"Scissors cuts paper, you lose."<<endl;
	}while(x !=4);
	return 0;
}
