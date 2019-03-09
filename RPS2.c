/***********************************************
  Author:    Ryan Fitzgerald
  Date:      6/9/18
  Purpose:    Rock, Paper, Scissors with switch
  Sources    of    Help:    Daily 5-2 code
  Time    Spent:    45 min
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
 Date: 6/3/18
 Name: Ryan Fitzgerald
 ***********************************************/

#include <stdio.h>
//#include <math.h>

void clear_keyboard_buffer (void);

int main(int argc, char * argv[])
{
    char choice1, choice2;
    enum player_choice{ROCK = 1, PAPER, SCISSORS};
    typedef enum player_choice choice;
    choice player1 = 0, player2 = 0;
    
    printf("Rock, Paper, Scissors Game!!!\nPleayer 1\nPlease select a choice.\nR, P, S:");
    choice1 = getchar();
    clear_keyboard_buffer();
    printf("Player 2\nPlease select a choice.\nR, P, S:");
    choice2 = getchar();
    clear_keyboard_buffer();
    
    
        if(choice1 == 'R' || choice1 == 'r')
            player1 = ROCK;
        else if(choice1 == 'P'|| choice1 == 'p')
            player1 = PAPER;
        else if(choice1 == 'S'|| choice1 == 's')
            player1 = SCISSORS;
        else
            printf("Invalid Entry\n");                      //player entry is invalid
    
        if(choice2 == 'R'|| choice2 == 'r')
            player2 = ROCK;
        else if(choice2 == 'P'|| choice2 == 'p')
            player2 = PAPER;
        else if(choice2 == 'S'|| choice2 == 's')
            player2 = SCISSORS;
        else
            printf("Invalid Entry\n");                      //player entry is invalid
   
        if(player2 == player1)                              //check for draw
            printf("Draw! Try Again.\n");

        else
        {
            
            switch (player1)
            {
                case ROCK:
                    if(player2 == PAPER)
                        printf("Player 2, YOU WIN!!!\n");
                    else
                        printf("Player 1, YOU WIN!!!\n");   //player 2 loses because of invalid entry
                    break;
            
                case PAPER:
                    if(player2 == SCISSORS)
                        printf("Player 2, YOU WIN!!!\n");
                    else
                        printf("Player 1, YOU WIN!!!\n");   //player 2 loses because of invalid entry
                    break;
            
                case SCISSORS:
                    if(player2 == ROCK)
                        printf("Player 2, YOU WIN!!!\n");
                    else
                        printf("Player 1, YOU WIN!!!\n");   //player 2 loses because of invalid entry
                    break;
            
                default:
                    printf("Player 2, YOU WIN!!!\n");       //player 1 loses because of invalid entry
            }//switch
        }//else
    
    return 0;
}//int main

void clear_keyboard_buffer (void)
{
    char ch;
    scanf("%c", &ch);
    while (ch != '\n')
    {
        scanf("%c", &ch);
    }
}
