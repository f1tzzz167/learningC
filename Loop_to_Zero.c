/***********************************************
 †Author:† † Ryan Fitzgerald
 †Date:† † † 6/2/18
 †Purpose:† † Functions with one parameter
 †Sources† † of† † Help:
 †Time† † Spent:† † 1 hour
 †***********************************************/

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
 Date:  6/2/18
 Name: Ryan Fitzgerald
 ***********************************************/
#include <stdio.h>


void loop_down_to_zero(int number);

void loop_up_to_int(int number);

int main(int argc, char * argv[])
{
    int number;
    printf("Please enter a positive integer:");
    scanf("%d", &number);
    
    loop_down_to_zero(number);
    printf("****\n");
    loop_up_to_int(number);
    
    return 0;
}

void loop_down_to_zero(int number)
{
    int i = 1;
    int m = number + 1;
    while(i < m)
    {
        printf("%d\n", m - i);
        i++;
    }
}

void loop_up_to_int(int number)
{
    for(int i = 1; i <= number; i++)
    {
        printf("%d\n", i);
    }
}
