#include <iostream>
using namespace std;

//void staticTest(void);

int main()
{
	
	for(;;)
	{
	int a = 0, b, c = 1, d = 0, i;

	//printf
	cout<<"number:\n";
	cin>>b;

	for(i = 0; i <= b; i++)
	{
		a = (a+c+d);
		d = c;
		c = a;
	}
	cout<<a<<endl;
}
	return(0);
}

/*void staticTest(void)
{
	static int callNumber = 1;
	static int x = 10;
	cout << callNumber << ") x = "<< x << endl;
	x *= 5;
	callNumber += 1;
}
*/
