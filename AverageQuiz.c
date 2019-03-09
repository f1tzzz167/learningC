/***********************************************
  Author:    Ryan Fitzgerald
  Date:      6/26/18
  Purpose:   Copy student grades into a file organized by last name and including averages of the scores
  Sources    of    Help:
  Time    Spent:    2 hours
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
 Date:  6/26/18
 Name:  Ryan Fitzgerald
 ***********************************************/


#include <stdio.h>
#include <stdlib.h>

struct studentRec{
    char firstName[10];
    char lastName[16];
    int scores[10];
};
typedef struct studentRec student;

void getStudentRecord(void);
void formatStudentRecord(void);
void printStuentRecord(student);

int main(int argc, const char * argv[])
{
    //open file
    FILE *outputFile;
    //mac file structure
    outputFile = fopen("/Users/fitz/Documents/Average.txt", "w");
    
    //check if the file opens successfully
    if (outputFile == NULL)
    {
        printf("The file can't open, please check the file path then try again!");
        exit(1);
    }
    else
    {
        // Format average.txt header
        formatStudentRecord();
    }
    
    //open file
    FILE *inputFile;
    //mac file structure
    inputFile = fopen("/Users/fitz/Documents/Quiz.txt", "r");
    //check if the file opens successfully
    if (inputFile == NULL)
    {
        printf("The file can't open, please check the file path or if the file exists and then try again!");
        exit(1);
    }
    else
    {
        printf("The file is successfully opened!\n");
        
        // Read student info from quiz.txt
        getStudentRecord();
    }
    
    // Close files
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

// Get student info into record
void getStudentRecord(void)
{
    // Declare Variables
    int i = 0, tempd;
    char temp;
    student aStudent;
    
    //open file
    FILE *inputFile;
    //mac file structure
    inputFile = fopen("/Users/fitz/Documents/Quiz.txt", "r");
    
    // Read through file
    while(fscanf(inputFile, "%s", &temp) != EOF)
    {
        while (temp != ' ')
        {
            // Get student first name
            aStudent.firstName[i] = temp;
            i++;
        }
        i++;
        while (temp != ' ')
        {
            // Get student last name
            aStudent.lastName[i] = temp;
            i++;
        }
        i++;
        while (fscanf(inputFile, "%d", &tempd) != '\0')
        {
            // Get student scores
            aStudent.scores[i] = temp;
            i++;
        }
        // Send student info to be coppied to file
        printStuentRecord(aStudent);
    }//while
}

void formatStudentRecord(void)
{
    //open file
    FILE *outputFile;
    //mac file structure
    outputFile = fopen("/Users/fitz/Documents/Average.txt", "w");
    
    // Format Header
    int i;
    fprintf(outputFile, "Name\t\tQuiz:\t");
    for (i = 1; i <= 10; i++)
    {
        fprintf(outputFile, "%d\t", i);
    }
    fprintf(outputFile, "Average\n");
    for (i = 0; i <78; i++)
    {
        fprintf(outputFile, "=");
    }
    fprintf(outputFile, "\n");
}

void printStuentRecord(student aStudent)
{
    //open file
    FILE *outputFile;
    //mac file structure
    outputFile = fopen("/Users/fitz/Documents/Average.txt", "a");
    
    // Declare variables
    double average, temp = 0.0;
    int i;
    
    // Calculate average
    for (i = 0; i < 10; i++)
    {
        temp += aStudent.scores[i];
    }
    average = temp/10;
    
    // Print student names
    fprintf(outputFile, "%s, %s\t\t", aStudent.lastName, aStudent.firstName);
    
    // Print student's scores
    for (i = 0; i < 10; i++)
    {
        fprintf(outputFile, "%3.d\t", aStudent.scores[i]);
    }
    // Print Student's average
    fprintf(outputFile, "%5.2f\n", average);
}
