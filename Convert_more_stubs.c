/***********************************************
  Author:    Ryan Fitzgerald
  Date:      6/15/18
  Purpose:    Convert lengths and weights
  Sources    of    Help:
  Time    Spent:    45 minutes
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
 Date:  6/15/18
 Name:  Ryan Fitzgerald
 ***********************************************/

#include <stdio.h>
void convert_lengths(void);
void convert_weights(void);

//stub functions
void length_to_us(void);
void length_to_metric(void);
void weight_to_us(void);
void weight_to_metric(void);

int main(int argc, char * argv[])
{
    int choice;
    
    do
    {
        // Ask for user input
        printf("Convert length(1)\nConvert weight(2)\nExit program(0)\n");
        scanf("%d",&choice);
        
        // Check choice against program
        switch (choice)
        {
                // Exit
            case 0:
                break;
                
                // Convert legth
            case 1:
                convert_lengths();
                break;
                
                // Convert weight
            case 2:
                convert_weights();
                break;
                
                // Validate input
            default:
                printf("Input invalid\n");
                break;
        }//switch
        
    }while(choice != 0);
    
    return 0;
}//main

void convert_lengths()
{
    
    
    int choice;
    
    // Display user choice
    printf("The user would like to convert length\n");
    
    // Ask for user input
    printf("Conversion:\nUS to metric(1)\nMetric to US(2)\n");
    scanf("%d", &choice);
    
    switch (choice)
    {
            // Exit
        case 0:
            break;
            
            // Convert legth
        case 1:
            length_to_metric();
            break;
            
            // Convert weight
        case 2:
            length_to_us();
            break;
            
            // Validate input
        default:
            printf("Input invalid\n");
            break;
    }//switch
    
    // There are 0.3048 meters in a foot, 12 inches in a foot, and 100 centimeters in a meter.
    
}//length

void convert_weights()
{
    int choice;
    
    // Display user choice
    printf("The user would like to convert weight\n");
    
    // Ask for user input
    printf("Conversion:\nUS to metric(1)\nMetric to US(2)\n");
    scanf("%d", &choice);
    
    switch (choice)
    {
            // Exit
        case 0:
            break;
            
            // Convert
        case 1:
            weight_to_metric();
            break;
            
            // Convert weight
        case 2:
            weight_to_us();
            break;
            
            // Validate input
        default:
            printf("Input invalid\n");
            break;
    }//switch
    
    //   there are 2.2046 pounds in a kilogram, 1000 grams in a kilogram, and 16 ounces in a pound.
    
}//weight

void length_to_us(void)
{
    // Display user choice
    printf("The user would like to convert metric to US\n");
    //code
}

void length_to_metric(void)
{
    // Display user choice
    printf("The user would like to convert US to metric\n");
    //code
}

void weight_to_us(void)
{
    // Display user choice
    printf("The user would like to convert metric to US\n");
    //code
}

void weight_to_metric(void)
{
    // Display user choice
    printf("The user would like to convert US to metric\n");
    //code
}
