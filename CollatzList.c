/***********************************************
 Author: Ryan Fitzgerald
 Date: 6/2/18
 Purpose: Display a table of numbers and their 'oneness' number per the Colatz Conjecture
 Sources of Help:
 Time Spent: 4 hours
 ***********************************************/

/***********************************************
 Computing I
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

// Declare functinos
void collatzC(int);
void clear_keyboard_buffer (void);

int main(int argc, char * argv[])
{
	// Declare Variables
    int lowerLimit, higherLimit, collatz = 0, n, counter = 0;
    
    // Put user in loop to validate input
    do
    {
    	// Ask user for first value
        printf("Please enter a start point between 1 and 1000(one thousand):\n");
        scanf("%d", &lowerLimit);
		// Clear keyboard buffer
        clear_keyboard_buffer();
        
        // Check validity of response
        if (lowerLimit <= 1 || lowerLimit >= 1000)
        {
            printf("Invalid number\n");
        }
        // Accept valid input
        else
        {
        	// Validate higher limit
            do
            {
            	// Ask user for second value
                printf("Please enter an end point between %d and 10000(ten thousand):\n", lowerLimit);
                scanf("%d", &higherLimit);
                clear_keyboard_buffer();
                // Check validity of response
                if (higherLimit <= lowerLimit || higherLimit >= 10000)
                {
                    printf("Invalid number\n");
                }
            }while(higherLimit <= lowerLimit || higherLimit >= 10000);
        }
    }while(lowerLimit <= 1 || lowerLimit >= 1000);
    
    // Initialize value to be passed
    collatz = lowerLimit;
	
	// Initialize value for loop
    n = lowerLimit;
    
    // Use loop for completing table
    for(n == lowerLimit; n <= higherLimit; n++)
    {
    	// Line breaks
        if(counter > 0 && counter % 7 == 0)
        {
        	printf("\n");
		}
		
		// Call Function
		collatzC(collatz);
        
        // increment values
        collatz++;
		counter++;
    }
    
    return 0;
}

// Find 3n+1 number
void collatzC (int collatz)
{
    printf("%4d:", collatz);
    int i = 0;
    while(collatz != 1)
    {
    	// Process odd numbers
        if (collatz % 2 != 0)
        {
            collatz = 3*collatz + 1;
            i++;
        }
        // Process even numbers
        else
        {
            collatz = collatz/2;
            i++;
        }
    }
    printf("%-4d\t",i);
}

// Clear garbage input from past keyboard inputs
void clear_keyboard_buffer (void)
{
    char ch;
    scanf("%c", &ch);
    while (ch != '\n')
    {
        scanf("%c", &ch);
    }
}
