//The differences between the integer and double type variables.
//If the declaration is declared to the double type, it will be displayed the double type's value.\

#include <iostream>
 using namespace std;
 int main()
 {
 int num1 = 12;
 int num2 = 13;
 int total = num1 + num2;
 int average1 = total/2; //integer type ]
 int average2 = total/2.0; //integer type
double average3 = total/2; //double type
double average4 = total/2.0; //double type
cout << "The total of 12 and 13 is " << total << " and their average is " << average1 <<
endl;
cout << "The total of 12 and 13 is " << total << " and their average is " << average2 <<
endl;
cout << "The total of 12 and 13 is " << total << " and their average is " << average3 <<
endl;
cout << "The total of 12 and 13 is " << total << " and their average is " << average4 <<
endl;
cout << "The total of 12 and 13 is " << total << " and their average is " <<
static_cast<double>(total/2) << endl;
cout << "The total of 12 and 13 is " << total << " and their average is " <<
static_cast<double>(total/2.0) << endl;
cin.ignore();
return 0;
}//end program 
