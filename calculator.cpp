// Name: Sanford Arbogast
// Summary: Exercise DB5 This program is a calculator
// Problem: getting while operation to work correctly
// time spent:60min
// orig date: 6/30/17
/* rev date:6/30/17 
originally had 
while (cont != 'y' || cont != 'Y');
removed 'Y" option in or statement
now works fine
*/

# include <iostream>
using namespace std;
int main()
{
	// name variables
	float num1, num2, ans;
	char cont;
	int op;

do
{
	// choose an opperation	
	cout << "Which do you want to do?\nEnter 1/2/3/4 \n\n"
	<< "1:Addition\n"
	<< "2:Subtraction\n"
	<< "3:Multiplication\n"
	<< "4:Division\n";
	
	cin >> op;
	cout << endl;
	
	// switch 1/2/3/4/default
	switch (op)
	{
		case 1://addition process
			cout << "Enter two numbers to add:\n";
			cin >> num1;// gets values
			cin >> num2;
			ans = num1 + num2;
			cout << num1 << " + " << num2 << " = " << ans << endl;
			cout << "---------------\n";
			break;
		
		case 2://subtraction process
			cout << "Enter two numbers to subtract:\n";
			cin >> num1;
			cin >> num2;
			ans = num1 - num2;//does operation
			cout << num1 << " - " << num2 << " = " << ans << endl;
			cout << "---------------\n";
			break;
		
		case 3://multiplication process
			cout << "Enter two numbers to multiply:\n";
			cin >> num1;
			cin >> num2;
			ans = num1 * num2;
			cout << num1 << " * " << num2 << " = " << ans << endl;
			cout << "---------------\n";//prints answer
			break;
			
			case 4://division process
			cout << "Enter two numbers to divide:\n";
			cin >> num1;
			cin >> num2;
			
			if (num2 !=0)//validity check
			{
				ans = num1 / num2;
				cout << num1 << " / " << num2 << " = " << ans << endl;
				cout << "---------------\n";
				break;
			}
			else
				cout << "ERROR!\nDivision by zero is NOT allowed\n";
				break;//exits switch
			
		default://what happes if 1/2/3/4 not entered
			cout << "That is not a valid option.\n";
			break;	
				
	}
	

	//loop to continue
	cout << "Do you want to quit?\nEnter y or n: ";
	cin >> cont;

}while (cont !='y');// loops back to top unless 'y' is entered
	
return 0;	
}

