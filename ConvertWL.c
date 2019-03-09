/***********************************************
  Author:    Ryan Fitzgerald
  Date:      6/15/18
  Purpose:    Convert lengths and weights
  Sources    of    Help:
  Time    Spent:    1 hour 45 minutes
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

// Define constants for conversion
#define KILO 1000
#define LBGRAM 2.2046
#define LBOUNCE 16
#define FOOT 12
#define INMETERS 30.48
#define CMETERS 100.0

// Declare functions
void convert_lengths(void);
void convert_weights(void);
void length_to_us(void);
void length_to_metric(void);
void weight_to_us(void);
void weight_to_metric(void);
void read_input(double*, double*);
void print_conversion(int, double, int);
void convert_length_to_us(double*, double*, double*, int*);
void convert_length_to_metric(double*, double*, double*, int*);
void convert_weight_to_us(double*, double*, double*, int*);
void convert_weight_to_metric(double*, double*, double*, int*);


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

// Direct user to choose metric/us conversion
void convert_lengths()
{
    
    
    int choice;
    
    // Print choice
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

// Direct user to choose metric/us conversion
void convert_weights()
{
    int choice;
    
    // Print choice
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

// Call functions to convert lengths to US
void length_to_us(void)
{
    double meters, inches, centimeters;
    int feet;
    
    // Print choice
    printf("The user would like to convert metric to US\n");
    
    // Ask for user input
    printf("Enter the length in meters and centimeters, separated by a ',':\n");
    read_input(&meters, &centimeters);
    
    // Conversion formulas
    convert_length_to_us(&meters, &centimeters, &inches, &feet);
    
    // Print result
    print_conversion(feet, inches, 1);
}

// Call function to convert lengths to metric
void length_to_metric(void)
{
    double feet, inches, centimeters;
    int meters;
    
    // Print choice
    printf("The user would like to convert US to metric\n");
    
    // Ask for user input
    printf("Enter the length in feet and inches, separated by a ',':\n");
    read_input(&feet, &inches);
    
    // Conversion formulas
    convert_length_to_metric(&feet, &inches, &centimeters, &meters);
    
    // Print result
    print_conversion(meters, centimeters, 2);
    
}

// Call functinos to convert mass to weight
void weight_to_us(void)
{
    double kilograms, grams, ounces;
    int pounds;
    
    // Print choice
    printf("The user would like to convert metric to US\n");
    
    // Ask for user input
    printf("Enter the weight in kilograms and grams, separated by a ',':\n");
    read_input(&kilograms, &grams);
    
    // Conversion formulas
    convert_weight_to_us(&grams, &kilograms, &ounces, &pounds);
    
    // Print result
    print_conversion(pounds, ounces, 3);
    
}

// Call functions to convert weight to mass
void weight_to_metric(void)
{
    double grams, pounds, ounces;
    int kilograms;
    
    // Print choice
    printf("The user would like to convert US to metric\n");
   
    // Ask for user input
    printf("Enter the weight in pounds and ounces, separated by a ',':\n");
    read_input(&pounds, &ounces);
    
    // Conversion
    convert_weight_to_metric(&pounds, &ounces, &grams, &kilograms);
    
    // Print result
    print_conversion(kilograms, grams, 4);
    
}

// Read user input
// Pass address back to original conversion function
void read_input(double *input1, double *input2)
{
    scanf("%lf, %lf", input1, input2);
}

// Print the result for the user
// Pass values from conversion function
void print_conversion(int large, double small, int conversion)
{
    switch (conversion)
    {
        case 1:// Metric to US length
            printf("Your conversion is %d feet and %.3f inches.\n", large, small);
            break;
        case 2:// US to Metric length
            printf("Your conversion is %d meters and %.3f centimeters.\n", large, small);
            break;
        case 3:// Metric to US wieght
            printf("Your conversion is %d pounds and %.3f ounces.\n", large, small);
            break;
        case 4:// US to Metric weight
            printf("Your conversion is %d kilograms and %.3f grams.\n", large, small);
            break;
    }
}

// Convert length to US
// Pass addesses of the four variables
void convert_length_to_us(double *meters, double *centimeters, double *inches, int *feet)
{
    *meters += *centimeters/CMETERS;
    *inches = *meters / (INMETERS/CMETERS) * FOOT;
    *feet = *inches / FOOT;
    *inches -= *feet * FOOT;
    
}

// Convert lecgth to Metric
// Pass addesses of the four variables
void convert_length_to_metric(double *inches, double *feet, double *centimeters, int *meters)
{
    *feet += *inches/FOOT;
    *centimeters = *feet * INMETERS;
    *meters = *centimeters / CMETERS;
    *centimeters -= *meters * CMETERS;
}

// Take mass and convert to weight
// Pass addesses of the four variables
void convert_weight_to_us(double *kilograms, double *grams, double *ounces, int *pounds)
{
    
    *kilograms += *grams/KILO;
    *ounces = *kilograms * LBGRAM * LBOUNCE;
    *pounds = *ounces / LBOUNCE;
    *ounces -= *pounds * LBOUNCE;
}

// Take weight and convert to mass
// Pass addesses of the four variables
void convert_weight_to_metric(double *pounds, double *ounces, double *grams, int *kilograms)
{
    
    *pounds += *ounces/LBOUNCE;
    *grams = (*pounds / LBGRAM) * KILO;
    *kilograms = *grams / KILO;
    *grams -= *kilograms*KILO;
}
