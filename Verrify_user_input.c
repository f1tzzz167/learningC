/***********************************************
 Author:    Ryan Fitzgerald
 Date:      6/2/18
 Purpose:   Input and Display a negative number
 Sources of Help:
 Time Spent: 20 min
 ***********************************************/

/***********************************************
 Computing I
 -≠--≠-
 COMP.1010 Honor Statement
 The practice of good ethical behavior is essential
 for maintaining good order in the classroom,
 providing an enriching learning experience for
 students, and as training as a practicing computing
 professional upon graduation. This practice is
 manifested in the Universityís Academic Integrity
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
 Date: 6/2/18
 Name: Ryan Fitzgerald
 ***********************************************/
#include <stdio.h>

void clear_keyboard_buffer (void);

int main(int argc, char * argv[])
{
    int number;
    printf("Please enter a negative integer\n");
    scanf("%d", &number);
    clear_keyboard_buffer();
    while(number >= -1)
    {
        if (number >= -1)
        {
            printf("Invalid integer.\nPlease enter a negative integer\n");
            scanf("%d", &number);
        }
    }
    printf("The negative integer is %d\n", number);
    clear_keyboard_buffer();
}

void clear_keyboard_buffer (void)
{
    char ch;
    scanf("%c", &ch);
    while (ch != '\n')
    {
        scanf("%c", &ch);
    }
}

