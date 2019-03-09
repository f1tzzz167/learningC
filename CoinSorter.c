/***********************************************
 Author: <insert your name>
 Date: <insert today’s date>
 
 Purpose: <Insert a short description of what
 your program does here.>
 
 Sources of Help: <Please list any sources that you used
 for help: tutors, web sites, lab assistants etc.>
 
 Time Spent: <Insert how much time you spent
 on the assignment here>
 ***********************************************/

/***********************************************
 Computing I -- COMP.1010 Honor Statement
 
 The practice of good ethical behavior is essential for maintaining good order in the classroom, providing an enriching learning experience for students, and as training as a practicing computing professional upon graduation.  This practice is manifested in the University’s Academic Integrity policy. Students are expected to strictly avoid academic dishonesty and adhere to the Academic Integrity policy as outlined in the course catalog.  Violations will be dealt with as outlined therein.
 
 All programming assignments in this class are to be done by the student alone.  No outside help is permitted except the instructor and approved tutors.
 
 I certify that the work submitted with this assignment is mine and was generated in a manner consistent with this document, the course academic policy on the course website on Blackboard, and the UMass Lowell academic code.
 
 Date:
 Name:
 ***********************************************/

#include <stdio.h>
//declare the function here
void coinCounter(int*, int*, int*, int*, int*);

int main(int argc, char *argv[]) {
    int totalCents;
    int numQuarters = 0, numDimes = 0, numNickels = 0, numPennies = 0;
    
    printf("Please enter the total number of cents (0-1000): ");
    scanf("%d", &totalCents);
    
    //call your function below
    coinCounter(&totalCents, &numQuarters, &numDimes, &numNickels, &numPennies);
    
    //print the resuint *,lt to the screen
    printf("The total number of quarters is: %d\n", numQuarters);
    printf("The total number of dimes is: %d\n", numDimes);
    printf("The total number of nickels is: %d\n", numNickels);
    printf("The total number of pennies is: %d\n", numPennies);
    
    return 0;
}

void coinCounter(int *totalCents, int *numQuarters, int *numDimes, int *numNickels, int *numPennies)
{
    int remainder;
    
    // Count quarters
    *numQuarters = *totalCents / 25;
    
    // Get remainder
    remainder = *totalCents % 25;
    
    // Count dimes
    *numDimes = remainder / 10;
    
    // Get remainder
    remainder = remainder % 10;
    
    // Count nickels
    *numNickels = remainder / 5;
    
    // Count Pennies
    // With this algorithm, number of pennies will always be between 0 and 4
    *numPennies = remainder - *numNickels;
}
//define your function here
