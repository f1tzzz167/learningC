// Name: Ryan Fitzgerald
// Summary: Writing the purchase price of 5 variables
//Total Purchase
//Challenge: Getting started, overcame by veiwing examples
//time spent: about 45 minutes
//06/24/2017

/* the complete chart based on the exercise's requirement

1 = $15.95
2 = $24.95
3 = $6.95
4 = $12.95
5 = $3.95
subtotal = 
tax @ 7% = 
total = $69.28
*/

#include <iostream>
using namespace std;
int main()
{
	//define variables
	double Item1 = 15.95,
	Item2 = 24.95,
	Item3 = 6.95,
	Item4 = 12.95,
	Item5 = 3.95,
	subtotal,
	tax = 0.07,
	total;
	
	//Introduce equations
	subtotal = Item1 + Item2 + Item3 + Item4 + Item5;
	total = subtotal * tax + subtotal;
	
	//Display total
 std::cout<<"The total prics is $" << total;
	return 0;
}
