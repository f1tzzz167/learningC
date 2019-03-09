/***********************************************
  Author:    Ryan Fitzgerald
  Date:      6/23/18
  Purpose:    Copy the contents of a file
  Sources    of    Help:
  Time    Spent:    40 min
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
#include <stdlib.h>

void copyFile(void);

int main(int argc, char * argv[])
{
    FILE *inputFile;
    inputFile = fopen("/Users/fitz/Documents/in.txt", "r"); //mac structure
    
    //check if the file opens successfully
    if (inputFile == NULL)
    {
        printf("The file can't open, please check the file path or if the file exists and then try again!");
        exit(1);
    }
    else {
        printf("The file is successfully opened!\n");
    }
    
    // Call function
    copyFile();
    
    // Close file
    fclose(inputFile);
    
    
    return 0;
}

// Copy file
void copyFile()
{
    // Open a placeholder in memory
    char temp;
    
    //Open file to read
    FILE *inputFile;
    inputFile = fopen("/Users/fitz/Documents/in.txt", "r");
    
    // Open file to copy
    FILE *outputFile;
    outputFile = fopen("/Users/fitz/Documents/out.txt", "w");
    
    // Read file contents
    while(fscanf(inputFile, "%c", &temp) != EOF)
    {
        // Copy contents to new file
        fprintf(outputFile, "%c",temp);

    }
    // Close file
    fclose(outputFile);
    
}
