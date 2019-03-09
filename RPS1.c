/***********************************************
  Author:    Ryan Fitzgerald
  Date:      6/3/18
  Purpose:    Rock, Paper, Scissors
  Sources    of    Help:    Stack overflow for help on getchar()
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
#include <math.h>

void clear_keyboard_buffer (void);

int main(int argc, char * argv[])
{
    unsigned int player1, player2;
    char choice1, choice2;
    
    printf("Rock, Paper, Scissors Game!!!\nPleayer 1\nPlease select a choice.\nR, P, S:");
    choice1 = getchar();
    clear_keyboard_buffer();
    printf("Player 2\nPlease select a choice.\nR, P, S:");
    choice2 = getchar();
        if(choice1 == choice2)
        {
            player2 = player1 = 0;
            printf("Draw! Try Again.\n");
        }
        else if(choice1 == 'R' || choice1 == 'r')
            player1 = 1;
        else if(choice1 == 'P'|| choice1 == 'p')
            player1 = 2;
        else if(choice1 == 'S'|| choice1 == 's')
            player1 = 3;
    
        if(choice2 == 'R'|| choice2 == 'r')
            player2 = 1;
        else if(choice2 == 'P'|| choice2 == 'p')
            player2 = 2;
        else if(choice2 == 'S'|| choice2 == 's')
            player2 = 3;
    
    //Begin game results
    
        if(player2 == 1 && player1 == 2) //-3, 6
          printf("Paper covers rock\nPlayer1, YOU WIN!!!\n");

        else if(player2== 1 && player1 == 3) //-8, 1
            printf("Rock crushes scissors\nPlayer2, YOU WIN!!!\n");

        else if(player2== 2 && player1 == 1) //3, 12
            printf("Paper covers rock\nPlayer2, YOU WIN!!!");

        else if(player2== 2 && player1 == 3) //-5, 4
            printf("Scissors cuts paper\nPlayer1, YOU WIN!!!\n");

        else if(player2== 3 && player1 == 1) //8, 17
            printf("Rock crushes scissors\nPlayer1, YOU WIN!!!\n");

        else if(player2== 3 && player1 == 2) //5, 14
            printf("Scissors cuts paper\nPlayer2, YOU WIN!!!");

    return 0;
}

void clear_keyboard_buffer (void)
{
    char ch;
    scanf("%c", &ch);
    while (ch != '\n')
    {
        scanf("%c", &ch);
    }
}
