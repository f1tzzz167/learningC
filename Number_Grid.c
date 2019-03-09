/***********************************************
  Author:    Ryan Fitzgerald
  Date:      6/16/18
  Purpose:    Array of even numbers to 80
  Sources    of    Help:
  Time    Spent:    25 minutes
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
 Date: 6/16/18
 Name: Ryan Fitzgerld
 ***********************************************/

#include <stdio.h>

// Keep array size static
#define SIZE 40

// Reverses the order of numbers in the array
void reverseArray(int *a, int *b);

// Prints the numbers in the array
void printElement(int ele);

int main(int argc, char * argv[])
{
    // Define variables and array
    int x[SIZE];
    int i, y = 0, a = 0, b = 39;
    
    
    // Define array
    for (i = 0; i < SIZE; i++)
    {
        x[i] = y;
        
        // Only input even numbers
        y += 2;
    }
    
    // Print array
    for (i = 0; i < SIZE; i++)
    {
        // Limit display to 10 columns
        if(i > 0 && i % 10 == 0)
        {printf("\n");}
        
        printElement(x[i]);
    }
    
    printf("\n*****\n");
    
    // Reverse array order
    for(i = 0; i < SIZE/2; i++)
    {
        reverseArray(&x[a], &x[b]);
        a++;
        b--;
    }
    
    // Print reversed array
    for (i = 0; i < SIZE; i++)
    {
        // Limit display to 10 columns
        if(i > 0 && i % 10 == 0)
        {printf("\n");}
        
        printElement(x[i]);
    }
    
    return 0;
}

// Print elements of array
void printElement(int ele)
{
    // Checked to see if formula was wrong
//    if(ele % 2 == 0)
        printf("%d\t", ele);
}

// Reverse the order of the elements in the array
void reverseArray(int *a, int *b)
{
    // Store variable in 'temp' to swap spots
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

