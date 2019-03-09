/***********************************************
    Author:    Ryan Fitgerald
  Date:      5/24/18
  Purpose:    Demonstrate printf by drawing
  Sources    of    Help:
  Time    Spent:    20 min
 ***********************************************/

/***********************************************
 Computing I
 -­‐-­‐
 COMP.1010 Honor Statement
 The practice of good ethical behavior is essential for maintaining
 good order in the classroom, providing an enriching learning
 experience for students, and as training as a practicing computing
 professional upon graduation. This practice is manifested in the
 University’s Academic Integrity policy. Students are expected to
 strictly avoid academic dishonesty and adhere to the Academic
 Integrity policy as outlined in the course catalog. Violations will
 be dealt with as outlined therein.
 All programming assignments in this class are to be done by the
 student alone. No outside help is permitted except the instructor and
 approved tutors.
 I
 certify that the work submitted with this assignment is mine and was
 generated in a manner consistent with this document, the course
 academic policy on the course website on Blackboard, and the UMass
 Lowell academic code.
 Date:  5/24/18
 Name:  Ryan Fitzgerald
 ***********************************************/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num1, num2, num3, num4, sum, product, quotient, remainder;
    num1 = 100;
    num2 = 10;
    num3 = 16;
    num4 = 4;
    
    printf("The starting numbers are :\n%d\n%d\n%d\n%d\n",num1,num2,num3,num4);
    
    sum = num1 + num2;
    product = num1 * num3;
    quotient = num2 / num4;
    remainder = num2 % num4;
    
    printf("The sum of 100 and 10 is %d\nThe product of 100 and 16 in %d\nThe quotient of 10 divied by 4 is %d with a remainder of %d\n",sum,product,quotient,remainder);
    return 0;
}
