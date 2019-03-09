/***********************************************
  Author:    Ryan Fitzgerald
  Date:      6/24/18
  Purpose:    Calculate today and yesterday's date in 2018
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
 Date:  6/23/18
 Name:  Ryan Fitzgerald
 ***********************************************/


#include <stdio.h>

// Define date structure
struct date
{
    int month;
    int day;
    int year;
};
typedef struct date Date;

// Establish days in month
const int daysInMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

// Find yesterday's date
Date calculateYesterday(Date today);

int main(int argc, const char * argv[])
{
    // Declare variables
    int month, day, year = 2018;
    
    // Prompt user for input
    printf("Please enter the month:\t");
    scanf("%d", &month);
    
    printf("Please enter the day:\t");
    scanf("%d", &day);
    
    // Initialize today
    Date today = {month, day, year};
    
    // Print today's date
    printf("Today's date is: %d-%d-%d\n", today.month, today.day, today.year);
    
    // Call function
    Date yesterday = calculateYesterday(today);
    
    // Print yesterday's date
    printf("Yesterday's date was: %d-%d-%d\n", yesterday.month, yesterday.day, yesterday.year);
    return 0;
}

// Find yesterday's date
Date calculateYesterday(Date today)
{
    
    // If it's the first of the month
    if (today.day == 1)
    {
        // In case user enters 1-1-2018
        if(today.month == 1)
        {
            Date yesterday = {12,31,2017};
            today = yesterday;
        }
        else
        {
            // Find yesterday's date
            today.month -= 1;
            today.day = daysInMonth[today.month - 1];
        }
    }
    else
    {
        today.day -= 1;
    }
    return today;
    
}
