/***********************************************
  Author:    Ryan Fitzgerald
  Date:      6/13/18
  Purpose:    Population model folowing Fibonacci sequence
  Sources    of    Help:
  Time    Spent:    3 hours
  ***********************************************/

/***********************************************
 Computing I
 -­‐-­‐
 COMP.1010 Honor Statement
 The practice of good ethical behavior is essential
 for maintaining good order in the classroom,
 providing an enriching learning experience for
 students, and as training as a practicing computing
 professional upon graduation. This practice is
 manifested in the University’s Academic Integrity
 policy. Students are expected to strictly avoid
 academic dishonesty and adhere to the Academic
 Integrity policy as outlined in the course catalog.
 Violations will be dealt with as outlined therein.
 All programming assignments in this class are to be
 done by the student alone. No outside help is
 permitted except the instructor and approved
 tutors. I certify that the work submitted with this
 assignment is mine and was generated in a manner
 consistent with this document, the course academic
 policy on the course website on Blackboard, and the
 UMass Lowell academic code.
 Date: 6/13/18
 Name: Ryan Fitzgerald
 ***********************************************/


#include <stdio.h>
#include <stdlib.h>
void clear_keyboard_buffer (void);
int fibonacci(int);


int main(int argc, const char * argv[])
{
    char ans = 'Y';
    
    // Keep program running
    for(;;)
    {
        
    int days, numDays, crud, crudTotal, check1, check2, leave = 0;
    
    do  // Start verification loop for crud size
    {
        printf("Please enter initial size of green crud: (lbs)\nEnter 'N' to exit\n");
        scanf("%d", &crud);
        scanf("%c", &ans);
        if(ans == 'n' || ans == 'N')
        {
            check1 = 0;
            check2 = 0;
            leave = 1;
            exit(0);
        }
        
        else if (crud < 0)   // Reject negative numbers
        {
            check1 = 1;
            printf("Invalid: Please enter a positive number:\n");
        }
        else if (crud >= 0) // Number is valid
        {
            check1 = 0;
        }
        else    // Reject non-numbers
        {
            check1 = 1;
            printf("Invalid: Not a number\n");
        }
    }while(check1 == 1);    // End crud loop
        
    do
    {
        printf("Please enter the number of days:\n");
        scanf("%d", &days);
        if (days < 0)   // Reject negative numbers
        {
            check2 = 1;
            printf("Invalid: Please enter a positive number:\n");
        }
        else if (days >= 0) // Number is valid
        {
            check2 = 0;
        }
        else    // Reject non-numbers
        {
            check2 = 1;
            printf("Invalid: Not a number\n");
        }
        
    }while(check2 == 1);
    
    numDays = days;
        
    if(days <= 5)
    {days = 1;}
        
    else
    {
        days = (days / 5);
    }
    if(leave == 1)
        break;
        
    days = fibonacci(days);

    crudTotal = crud * days;
    printf("With an initial population of %d pounds, after ,%d days, the total population will be %d\n", crud, numDays, crudTotal);
        
	}//for

    
    return 0;
}// main

void clear_keyboard_buffer (void)
{
    char ch;
    scanf("%c", &ch);
    while (ch != '\n')
    {
        scanf("%c", &ch);
    }
}// clear

// Calculate crud mass with the passed value of days
int fibonacci(int days)
{
    int number, prev1, prev2, i;
    number = 0;
    prev1 = 1;
    prev2 = 0;
    
    for (i = 0; i < days; i++)
    {
        number = (prev1+prev2);
        prev2 = prev1;
        prev1 = number;
    }
    
    return number;
}// fibonacci

