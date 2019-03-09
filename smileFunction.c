/***********************************************
 Author:    Ryan Fitgerald
 Date:      5/24/18
 Purpose:    Demonstrate functions
 Main Difference: Repeat functions
 Sources    of    Help:
 Time    Spent:    20 min
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
 Date: 5/24/18
 Name: Ryan Fitzgerald
 ***********************************************/
#include <stdio.h>

void smile(void);

int main(int argc, const char * argv[]) {
    
    smile();
    printf("\n");
    smile();
    printf("\n");
    smile();
    return 0;
}

void smile(void){
    printf("  ****\n *    *\n*  .  .*\n*  \\_/ *\n *    *\n  ****\n");
}
