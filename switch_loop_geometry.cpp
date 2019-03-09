//Name: Ryan Fitzgerald
//Summary: Geometry Calculator
//Chapter 4 question 23
//Challenge: adding conditions for an error message, overcame by reviewing the reading
//the program took about an hour to complete 
//06/24/2017 Rev. A
//06/25/2017 Rev. B


#include <iostream>
using namespace std;

int main()
{
	//define variables
	double radius, area, length, width, base, height;
	int choice;
	do
	{
		//displaying options
		std::cout<<"1. Calulate the Area of a Circle"<<endl;
		std::cout<<"2. Calculate the Area of a Rectangle"<<endl;
		std::cout<<"3. Calculate the Area of a Triangle"<<endl;
		std::cout<<"4. Quit"<<endl;
		
		//inputting choice
		std::cout<<"Enter your choice (1-4):"<<endl;
		std::cin>>choice;
		switch(choice)
		{
			case 1: //equations for circle
			std::cout<<"Enter radius:"<<endl;
			std::cin>>radius;
				area = (3.14 * radius * radius);
				if(radius > 0)
				{
				std::cout<<"Area of Circle is"<<area<<endl;
				}
				else
				std::cout<<"Error"<<endl;
				break;
			case 2: //equations for rectangle
			std::cout<<"Enter length:";
			std::cin>>length;
			std::cout<<"Enter width";
			std::cin>>width;
				area = length * width;
				if(length && width > 0)
				{
				std::cout<<"Area of Rectangle is"<<area<<endl;
				}
				else
				std::cout<<"Error"<<endl;
				break;
			case 3: //equations for triangle
			std::cout<<"Enter base:";
			std::cin>>base;
			std::cout<<"Enter height:";
			std::cin>>height;
				area = 0.5 * base * height;
				if(base && height > 0)
				{
				std::cout<<"Area of Triangle is"<<area<<endl;
				}
				else
				std::cout<<"Error"<<endl;
				break;
			case 4:	exit(0);
		}//end program switch
	}while(choice = 4);
return 0;
}
