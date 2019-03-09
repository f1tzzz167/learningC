/***********************************************
  Author:    Ryan Fitzgerald
  Date:      6/23/18
  Purpose:    PRint a string forwards and backwards
  Sources    of    Help:
  Time    Spent:    1 hour
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
 Date:  6/23/18
 Name:  Ryan Fitzgerald
 ***********************************************/

#include <stdio.h>
#include <stdlib.h>

void reverseArray(char *a, char *b);

int main(int argc, char * argv[])
{
    char str1[80];
    int i = 0, strSize;
    
    // Promt user input
    printf("Enter a string of characters:");
    
    // Read characters in string
    while(str1[i - 1] != '\n') // I tried '/0' but anything not already written in memory was using that
    {
        if(i == 80)
            exit(1);
        // Read characters in string one by one
        scanf("%c", &str1[i]);
        
        i++;
        
    }
    
    // Initialize variable for swap
    strSize = i;
    
    // Print the string
    printf("%s", str1);
    
    // Reverse the string
    for(i = 0; i < strSize; i++)
    {
        reverseArray(&str1[i], &str1[strSize]);
        i++;
        strSize--;
    }
    
    // Print the reversed string
    printf("%s\n", str1);
    
    return 0;
}
// Reverse the order of the characters in the string
void reverseArray(char *a, char *b)
{
    // Store variable in 'temp' to swap spots
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
