/***********************************************
  Author:    Ryan Fitzgerald
  Date:      6/20/18
  Purpose:    Math with text files
  Sources    of    Help:
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
 Date:  6/20/18
 Name:  Ryan Fitzgerald
 ***********************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    //open file
    FILE *inputFile;
    //mac file structure
    inputFile = fopen("/Users/fitz/Documents/numbers.txt", "r");
    
        //declare variables
    int num, sum = 0, average, smallest, largest, i = 0;
    while(fscanf(inputFile, "%d", &num) != EOF)
    {
        if(i == 0)
        {
            smallest = num;
            largest = num;
        }
        if(smallest > num)
            smallest = num;
        if(largest < num)
            largest = num;
        
        //print the values listed
        printf("%d\n", num);
        
        //sum the values listed
        sum += num;
        i++;
    }
    
    //print sum
    printf("Sum = %d\n", sum);
    //print smallest
    printf("Smallest = %d\n", smallest);
    //print largest
    printf("Largest = %d\n", largest);
    //find and print average
    average = sum/i;
    printf("Averaage = %d\n", average);
    
    return 0;
}
