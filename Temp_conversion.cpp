/* Ryan Fitzgerald
Celcius/Fahrenheit conversion
challenge was arrangining the table in an organized manner
fixed it by leaving the initial condition out of the loop.
7/27/2017
table at end
0               -17.7778
1               -17.2222
2               -16.6667
3               -16.1111
4               -15.5556
5               -15
6               -14.4444
7               -13.8889
8               -13.3333
9               -12.7778
10              -12.2222
11              -11.6667
12              -11.1111
13              -10.5556
14              -10
15              -9.44444
16              -8.88889
17              -8.33333
18              -7.77778
19              -7.22222
20              -6.66667
*/
#include <iostream>
using namespace std;

int main()
{
	//declare variables
		double f, c;
		
	//ask for user input for quick conversion
	cout<<"Input Fahrenheit Temperature:\n(Value will round to nearest integer)\n";
	cin>>f;
	c = (5*(f - 32)/9);
	cout<<"Temperature in Celcius is: "<<c<<endl;
	system ("PAUSE");
		//begin table
		cout<<"Degrees F	Degrees C\n";
		double fe;
		double ce;
		fe = -1;
		//initialize loop
		do 
		{
			fe = fe+1;
			ce = (5*(fe - 32)/9);
			cout<<fe<<"		"<<ce<<endl;
		}while(fe < 20);//continue loop until needed table is complete
	return 0;
}
