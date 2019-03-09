/*Ryan Fitzgerald
Gradebook program
user inputs grades for 5 students and averages test scores
still having trouble with output of grades and letter grades
*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	const int TEST = 4;
	const int STUDENTS = 5;
	string student [STUDENTS];
	double tests[STUDENTS][TEST];
	string average;
	string grades;

	for(int n = 0; n < 5; n++)
	{
		cout<<"\nPlease input "<<"student "<<(n + 1)<<"'s name"<<endl;
		cin>>student[n];
		cout<<"Please input their 4 test scores: ";
		for(int t = 0; t < 4; t++)
		{
			cin>>tests[n][t];
			if(tests[n][t] < 0, tests[n][t] > 100)
			{
				cout<<"\nScores should be on a scale from 0 to 100"<<endl;
				cout<<"Enter test scores: ";
				cin>>tests[n][t];
			}
		}
	}
	for(int n = 0; n < 5; n++)
		{
			average[n] = 0;
			for(int t = 0; t < 4; t++)
			average[n] += tests[n][t];;
			average[n] /= 4;
			char letter[n];
			
			if (grades[n] > 90)
			letter[n] = 'A';
			else if (average[n] > 80)
			letter[n] = 'B';
			else if (average[n] > 70)
			letter[n] = 'c';
			else if (average[n] > 60)
			letter[n] = 'D';
			else
			letter[n] = 'F';
		
		
	cout<<"\nStudent Name	Average Score	Letter Grade"<<endl;
	for(int n = 0; n < 5; n++)
	{
		cout<<student[n]<<"		"<<average[n]<<"		"<<letter[n]<<endl;
	}
	system("PAUSE");
	return 0;
}
}
