#include <iostream>
using namespace std;

void staticTest(void);

int main(void)
{
	int counter = 0;

	for(counter = 1; counter <= 5; counter += 1)
	{
		staticTest();
	}
	return(0);
}

void staticTest(void)
{
	static int callNumber = 1;
	static int x = 10;
	cout << callNumber << ") x = "<< x << endl;
	x *= 5;
	callNumber += 1;
}

