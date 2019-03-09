/***********************************************
  Author:    Ryan Fitzgerald
  Date:      6/27/18
  Purpose:   Print array forward and reverse in varrying sizes
  Sources    of    Help:
  Time    Spent:    30 min
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
 Date:  6/27/18
 Name:  Ryan Fitzgerald
 ***********************************************/


#include <stdio.h>
#include <stdlib.h>

// Reverses the order of numbers in the array
void reverseArray(int *a, int *b);

int main(int argc, const char * argv[])
{
    // Declare variables
    int *pInt = NULL, *pIntCopy = NULL;
    int i, arrSize;
    
    // Prompt user for inputs
    printf("Please enter the number of elements:");
    scanf("%d", &arrSize);
    
    // Allocate memory for arrays
    pInt = (int *)malloc(arrSize * sizeof(int));
    pIntCopy = (int *)malloc(arrSize * sizeof(int));
    
    // Test if memory is available
    if (pInt == NULL||pIntCopy == NULL)
    {
        printf("Can't allocate memory!\n");
        exit(1);
    }
    
    // Initialize arrays
    for (i  = 0; i < arrSize; i++)
    {
        pInt[i] = i + 1;
        pIntCopy[i] = pInt[i];
    }
    
    // Initialize variables for function call
    int a = 0, b = arrSize;
    
    // Reverse array order
    for(i = 0; i < arrSize; i++)
    {
        // Call function
        reverseArray(&pInt[a], &pInt[b]);
        a++;
        b--;
    }
    
    // Print Arrays
    for (i = arrSize - 1; i >= 0; i--)
    {
        printf("Element at index %d is: %d\n", i, pInt[i]);
    }
    
    // Break point
    printf("***\n");
    
    // Print Arrays
    for (i = 0; i < arrSize; i++)
    {
        printf("Element at index %d is; %d\n", i, pIntCopy[i]);
    }
    
    return 0;
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
