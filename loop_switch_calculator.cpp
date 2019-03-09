// Name: Ryan Fitzgerald
//Looping calculator
//The initial code was quick to write, finding exactly where to loop the while statement took 45 minutes alone
#include <iostream>
using namespace std;
int main()

{
	//define terms
	char op;
	float x, z;
	{	
	//start loop
	while (op != 'q'){
	//user input
	cout<<"Enter first number:\n";
	cin>>x;
	cout<<"Oporator? (+, -, *, /)[q to exit]:\n";
	cin>>op;
	cout<<"Enter second number:\n";
	cin>>z;

			//calculations
			switch(op)
		{
			case 'q':
			cout<<"End program."<<endl;
			break;
			case '+':
			cout<<"Answer:" <<x+z <<endl;
			break;
			case '-':
			cout<<"Answer:" <<x-z <<endl;
			break;
			case '*':
			cout<<"Answer:" <<x*z <<endl;
			break;
			case '/':
				//dont divide by 0 or we all die
			if(z == 0)
				{
					cout<< "Undefined" <<endl;
					break;
				}
			else
			cout<<"Answer:" <<x/z <<endl;
			break;
			default:
				//dont accept random characters in place of operators 
			cout<<"Error, undefined operator used.\n";
			break;	
		}
		
	}
	}
	return 0;
}



