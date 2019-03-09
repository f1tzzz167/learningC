#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(void)
{
	int randNum = 0; //minimum limit
	int randMax = 10; //maximum limit
	srand(time(NULL)); 
	randNum = rand() % randMax +1; //define range to program
	do
	{
	cout<<randNum<<endl;
	system("PAUSE");
	}
	while(randNum != 0);
	return 0;
}
