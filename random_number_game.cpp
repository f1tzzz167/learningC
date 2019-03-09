// Name: Ryan Fitzgerald
// Summary: Making a number guessing game
//Guess the Number
//Challenge: syntax of making variables, examples of problems helped
//time spent: about 45 minutes
//07/12/2017

#include <iostream>
#include <cstdlib>

//dedfine varieables
using namespace std;
int main()
{
int y;
unsigned int number;
//define range of numbers
number = 1+rand() % 50;
double guess;
cout<<"Guess the Number between 1 and 50:" <<endl;
//start program loop
do
{
cin>>y;
if(number < y)
cout<<"Too high, try again" <<endl;
if(number > y)
cout<<"Too low, try again" <<endl;
if(y == number)
cout<<"Congratulations!!! You guessed correctly!" <<endl; 
}
while(y != number); //continue/end loop based on answer
//pause program for a while
system("PAUSE");
 
return 0;
}

