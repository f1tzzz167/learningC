//RSA Calculator
#include <iostream>
#include<iomanip>
#include<cmath>
#include<fstream>
using namespace std;

int main ( ) 

{ 
long long int primeOne, primeTwo;
long long int rsaOne;
cout<<"Input RSA number:\nWARNING: currently limited to 32 bit numbers.\n";
cin>>rsaOne;
long long const int rsa = rsaOne;
primeOne = 10000;

for(primeOne = 10000; primeOne < rsa; primeOne++)
{
	primeTwo = rsa/primeOne;
	
	if(rsa % primeOne == 0)
	{
		cout<<rsa<<endl;
		cout<<primeOne<<endl;
		cout<<primeTwo<<endl;
		break;
	}
	
}


    system("pause");                     
    return 0;
}
