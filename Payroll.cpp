// Name: Ryan Fitzgerald
// Summary: Making a program to keep track of total employee pay information
//Payroll Report
//Challenge: keeping track of variables and conditions, examples of problems helped
//time spent: about an hour and 45 minutes with a computer crash
//07/12/2017
/* example program
Employee Number(Press 0 to exit):1125819
Enter gross pay:
2000
Enter Federal Tax:
200
Enter FICA Withholdings:
80
Enter State Tax:
60
Employee Number(Press 0 to exit):1125819
Enter gross pay:
2000
Enter Federal Tax:
80
Enter FICA Withholdings:
60
Enter State Tax:
20
Employee Number(Press 0 to exit):0
YTD Gross Pay: 6000
YTD Federal Taxes: 360
YTD FICA Taxes: 200
YTD State Taxes: 100
YTD Net Pay: 5340
Press any key to continue . . .
*/

#include <iostream>
using namespace std;
int main()
{
	//define variables
	double grossPay = 0.0; //use floating point instead of int
	double fedTax = 0.0;
	double stateTax = 0.0;
	double fica = 0.0;
	double totalGrossPay = 0.0; 
	double totalFedTax = 0.0;
	double totalStateTax = 0.0;
	double totalFICA = 0.0;
	double netPay = 0.0;
	int empNum = 1;
	bool condition;
	
	//do not accept negative numbers
	while(empNum != 0)
	{
		cout<<"Employee Number(Press 0 to exit):";
		cin>>empNum;
		if(empNum !=0)
		do
		{
			//Prompt user for data input
			cout<<"Enter gross pay:" <<endl;
			cin>>grossPay;
			cout<<"Enter Federal Tax:" <<endl;
			cin>>fedTax;
			cout<<"Enter FICA Withholdings:" <<endl;
			cin>>fica;
			cout<<"Enter State Tax:" <<endl;
			cin>>stateTax;
			//create error check for negative numbers
			if(grossPay < 0, fedTax < 0, fica < 0, stateTax < 0)
			{
				cout<<"Error: Negative Number Input. Please Re-Enter\n";
				condition = true;
			}
			//ensure withholdings are not greater than gross pay
			else if(fedTax > grossPay, stateTax > grossPay, fica > grossPay)
			{
				cout<<"Withholdings cannot be greater than gross pay.\n";
				condition = true;
			}
			else if(fedTax + stateTax + fica > grossPay)
			{
				cout<<"Withholdings cannot be greater than gross pay.\n";
				condition = true;
			}
			else
			condition = false;
		}
		while(condition);
		//calculate totals for payroll
		totalGrossPay += grossPay;
		totalFedTax += fedTax;
		totalFICA += fica;
		totalStateTax += stateTax;
		netPay = totalGrossPay - totalFedTax - totalFICA - totalStateTax;
	}
	
	//display output
	cout<<"YTD Gross Pay: "<<totalGrossPay <<endl;
	cout<<"YTD Federal Taxes: "<<totalFedTax <<endl;
	cout<<"YTD FICA Taxes: "<<totalFICA <<endl;
	cout<<"YTD State Taxes: "<<totalStateTax <<endl;
	cout<<"YTD Net Pay: "<<netPay <<endl;
	//pause system to observe data
	system("PAUSE");
	
	return 0;
}
