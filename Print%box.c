/***********************************************
  Author:    Ryan Fitzgerald
  Date:      6//18
  Purpose:    Print a box of '%' with for loops and functions
  Sources    of    Help:    Daily 5-1 code
  Time    Spent:    20 min
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
 Date:  6/3/18
 Name:  Ryan Fitzgerald
 ***********************************************/

#include <stdio.h>

void clear_keyboard_buffer (void);
void draw_box(int, int);

int main(int argc, char * argv[])
{
    int numberPercent, numBox = -1;

    printf("Please enter the number of '%%' you want:");    //Prompt user input for %
    scanf("%d",&numberPercent);
    clear_keyboard_buffer();
    
    if(numberPercent < 80 && numberPercent > 0)     //verify user input
    {
        printf("Please enter the number of lines you want:");   //Prompt user input for lines
        scanf("%d",&numBox);
        clear_keyboard_buffer();
        if(numBox < 24 && numBox > 0)     //verify user input
        {
            draw_box(numberPercent, numBox);            //call function
        }//if
        
        else
        {
            while(numBox > 23 || numBox < 1)  //keep user in loop
            {
                printf("I'm sorry, number is invalid. Try [1-23]:");
                scanf("%d", &numBox);
                clear_keyboard_buffer();
            }//while
        
            draw_box(numberPercent, numBox);    //run function after verification
        
        }//else
    }//if
    else
    {
        while(numberPercent > 79 || numberPercent < 1)      //keep user in loop
        {
            printf("I'm sorry, number is invalid. Try [1-79]:");
            scanf("%d", &numberPercent);
            
            clear_keyboard_buffer();
            
        }//while
    
        draw_box(numberPercent, numBox);
    
    }//else
    
    return 0;

}//int main

void draw_box(int numberPercent, int numBox)
{
    for(int l = numBox; l > 0; l--)
    {
        for(int i = numberPercent; i > 0; i--)
        {
            printf("%%");
        }//for i
        printf("\n");
    }//for l
    
}//void

void clear_keyboard_buffer (void)
{
    char ch;
    scanf("%c", &ch);
    while (ch != '\n')
    {
        scanf("%c", &ch);
    }//while
}//void

