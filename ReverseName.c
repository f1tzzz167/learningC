/***********************************************
  Author:    Ryan Fitzgerald
  Date:      6/25/18
  Purpose:
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
 Date:
 Name:
 ***********************************************/

#include <stdio.h>

void getFullName(char[], char[], char[], int);

int main(int argc, char * argv[])
{
    char firstName[10];
    char lastName[16];
    char name[28];
    int i = 0, arrSize;
    char temp;
    
    FILE *inputFile;
    inputFile = fopen("/Users/fitz/Documents/name.txt", "r"); //mac structure
    
    //check if the file opens successfully
    if (inputFile == NULL)
    {
        printf("The file can't open, please check the file path or if the file exists and then try again!");
        exit(1);
    }
    else
    {
        printf("The file is successfully opened!\n");
    }
    
    
    while(fscanf(inputFile, "%c", &temp) !=EOF)
    {
        fscanf(inputFile, "%c", &temp);
        name[i] = temp;
        i++;
    }
    arrSize = i + 2;
    i = 0;
    while (name[i] != ' ')
    {
        firstName[i] = name[i];
    }
    while (name[i] != '\0')
    {
        lastName[i] = name[i];
    }
    
    getFullName(firstName, lastName, name, arrSize);
    fclose(inputFile);
    
    return 0;
}

void getFullName(char firstName[], char lastName[], char name[], int arrSize)
{
    int i = 0;
    while (lastName[i] != '\0')
    {
        name[i] = lastName[i];
        i++;
    }
    name[i] = ',';
    i++;
    name[i] = ' ';
    i++;
    
    while (i < arrSize)
    {
        name[i] = firstName[i];
        i++;
    }
    
    // Open file to copy
    FILE *outputFile;
    outputFile = fopen("/Users/fitz/Documents/out.txt", "w");
    
    while (i < arrSize)
    {
        fprintf(outputFile, "%c", name[i]);
    }
    fclose(outputFile);
}
