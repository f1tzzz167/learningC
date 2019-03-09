/***********************************************
  Author:    Ryan Fitzgerald
  Date:      6/17/18
  Purpose:
  Sources    of    Help:
  Time    Spent: 45 minutes
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
 Date:
 Name:
 ***********************************************/

#include <stdio.h>

// Keep array size static
#define SIZE 10

// Find location of largest element in array
int findLargest(int arr[]);

int main(int argc, char * argv[])
{
    // Define variables and array
    int i, largest;
    int x[SIZE];
    
    // Promt user input
    printf("Enter 10 integer values:\n");
    for(i = 0; i < SIZE; i++)
    {
        // Show user values 1-10 for input
        printf("Value %d:", i+1);
        scanf("%d", &x[i]);
    }
    
    // Find the largest number in the array
    largest = findLargest(x) + 1;
    
    // Display which elelment has the largest number
    printf("The largest number is in index %d\n", largest);
}

// Find location in array of largest integer
int findLargest(int arr[])
{
    // Declare and define variables
    int i = 0, temp;
    
    temp = 0;
    
    // Search through array
    for (i = 0; i < SIZE - 1; i++)
    {
        // Compare values of adjescent elements and current largest element
        if (arr[i + 1] > arr[i] && temp < arr[i + 1])
        {
            // Temporarily hold variable for the array element
            temp = i + 1;
        }
    }
    // Pass value back to main
    return temp;
}

