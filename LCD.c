/***********************************************
 Author: Ryan Fitzgerald
 Date: 6/9/18
 Purpose: Get highest common denominator of two positive integers
 Sources of Help:
 Time Spent: 90 min
 ***********************************************/

/***********************************************
 Computing I
 
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
 Date:  6/9/18
 Name:  Ryan Fitzgerald
 ***********************************************/

#include <stdio.h>


int positive_integer(int);
void clear_keyboard_buffer (void);
int highest_common_denominator(int, int);

int main(int argc, char * argv[])
{
    int number, num1, num2, hcd;
    
    printf("Please enter a positive integer:\t");   //promt and accept user input
    scanf("%d", &number);
    clear_keyboard_buffer();                        //clear buffer
    num1 = positive_integer(number);                //call function
    
    printf("Please enter a positive integer:\t");    //promt and accept user input
    scanf("%d", &number);
    clear_keyboard_buffer();                        //clear buffer
    num2 = positive_integer(number);                //call function
    
                                                    //call hcd
    hcd = highest_common_denominator(num1, num2);
                                                    //print result
    printf("The highest common denominator of %d and %d is %d\n", num1, num2, hcd);
    
    return 0;
}//int main

void clear_keyboard_buffer (void)
{
    char ch;
    scanf("%c", &ch);
    while (ch != '\n')
    {
        scanf("%c", &ch);
    }
}

int positive_integer(int number)
{
    
    if(number >= 1)    //verify user input
    {
        return number;
    }
    else    //trap user in loop
    {
        do
        {
            printf("Invalid entry, please enter number greater than %d", 0);
            scanf("%d", &number);
            clear_keyboard_buffer();
        }while(number < 1);    //end loop
        
        return number;
    }//else
}

int highest_common_denominator(int num1, int num2)
{
    int rem1, rem2, ma1, ma2, hcd, div;
    //if either number is prime, the result will default to 1

    for(ma1 = num1; ma1 > 0; --ma1)
    {
        rem1 = num1 % ma1;
        if(rem1 == 0)    //check highest int divisor for num1
        {
            for(ma2 = num2; ma2 > 0; --ma2)
            {
                rem2 = num2 % ma2;
                if(rem2 == 0)    //check highest in divisor for num2
                {
                    div = ma2/ma1;
                    if(ma2%ma1 == 0)
                    hcd = ma1;
                    break;
                }//if max2
            }//for max2
        }//if rem1
        if(hcd == ma1)
            break;
    }//for max1
    
    return hcd;
}
