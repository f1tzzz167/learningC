#include<iostream>
using namespace std;

int main()
{
	int choice;
	
	cout<<"Please select a choice.\n1. Burger\n2. Hot Dog\n3. Fires\n4. Soda"<<endl;
	cin>>choice;
	if(choice == 1)
	cout<<"What would you like on your Burger?";
	if(choice == 2)
	cout<<"What would you like on your Hot Dog?";
	if(choice == 3)
	cout<<"Would you like Curly Fries or Waffle Fires?";
	if(choice == 4)
	cout<<"What would you like for a Drink?";
	else
	cout<<"Invalid Selection";
}
