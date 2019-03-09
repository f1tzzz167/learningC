#include<iostream>
#include<string>
using namespace std;

int main()
{
	string monthOne, monthTwo, monthThree;
	 rain1, rain2, rain3, averageRainfall;
	
	cout<<"Enter month 1 name:\n";
	cin>> monthOne;
	
	cout<<"Enter month 2 name:\n";
	cin>> monthTwo;
	
	cout<<"Enter month 3 name:\n";
	cin>> monthThree;

	cout<<"Enter rainfall for "<<monthOne<<" in inches:\n";
	cin>> rain1;
	
	cout<<"Enter rainfall for "<<monthTwo<<" in inches:\n";
	cin>>rain2;
	
	
	cout<<"Enter rainfall for "<<monthThree<<" in inches:\n";
	cin>>rain3;
	
	averageRainfall = (rain1+rain2+rain3)/3;
	
	cout<<"The average rainfall for "<<monthOne<<", "<<monthTwo<<", and "<<monthThree<<" is "<<averageRainfall<<" inches.";
	
	return 0;
}
