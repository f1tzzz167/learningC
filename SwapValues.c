/***********************************************
 Author: <insert your name>
 Date: <insert today’s date>
 
 Purpose: <Insert a short description of what
 your program does here.>
 
 Sources of Help: <Please list any sources that you used
 for help: tutors, web sites, lab assistants etc.>
 
 Explanation for your function:  <Please clearly explain why your
 function works>
 
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
//function prototype here
void changeOver(int*, int*);


int main(int argc, const char * argv[]) {
    int a, b;
    
    printf("Please enter two integers: ");
    scanf("%d,%d", &a, &b);  //enter two integers separated by a ,
    
    printf("a is: %d\n", a);
    printf("b is: %d\n", b);
    
    /*function call to make sure that (post-condition)
     (1) variable a stores the larger value
     (2) variable b stores the smaller value after the function is called
     */
    changeOver(&a, &b);
    
    printf("a now becomes the bigger one and the value is: %d\n", a);
    printf("b now becomes the smaller one and the value is: %d\n", b);
    
    return 0;
}

//function definition here

void changeOver(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
    
}

