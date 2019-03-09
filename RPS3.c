/***********************************************
  Author:    Ryan Fitzgerald
  Date:      6/14/18
  Purpose:    Rock paper scissors game
  Sources    of    Help:
  Time    Spent:    1 hour
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
 Date:  6/14/18
 Name:  Ryan Fitzgerald
 ***********************************************/

#include <stdio.h>
#include <string.h>

int getPlayerChoice(int);
void clear_keyboard_buffer (void);
void checkWinner(int, int);


int main(int argc, char * argv[])
{
    int player;
    char again = 'Y';
    enum player_choice{ROCK = 1, PAPER, SCISSORS};
    typedef enum player_choice choice;
    choice player1 = 0, player2 = 0;
    
    // Keep player in loop
    for(;;)
    {
        // Play again
        if (again == 'Y' || again == 'y')
        {
            // Player 1 makes choice
            player = 1;
            player1 = getPlayerChoice(player);
            
            // Player 2 makes choice
            player = 2;
            player2 = getPlayerChoice(player);
            
            // Check winner
            checkWinner(player1, player2);
        }
        // Allow players to exit loop
        else if (again == 'N' || again == 'n')
        {
            break;
        }
        
        // Ask user to play again
        printf("Would you like to play agian? (Y/N)\n");
        again = getchar();
    }
    
    return 0;
}

// Get and verify player input
int getPlayerChoice(int player)
{
    char choice;
    int check = 1;
    
    // Promt player input
    printf("Player %d it is your turn\n", player);
    choice = getchar();
    clear_keyboard_buffer();
    
    // Verify player input
    do
    {
        // Rock
        if (choice == 'r' || choice == 'R')
        {
            choice = 1;
            check = 0;
        }
        // Paper
        else if (choice == 'p' || choice == 'P')
        {
            choice = 2;
            check = 0;
        }
        //Scissors
        else if (choice == 's' || choice == 'S')
        {
            choice = 3;
            check = 0;
        }
        // Check invalid input
        else
        {
            printf("Invalid choice: Player %d\nTry again\n", player);
            choice = getchar();
            clear_keyboard_buffer();
        }
        // Allow player to try again in invalid input
    }while(check == 1);
    
    return choice;
}

// Check winner
void checkWinner(int player1, int player2)
{
    // Check for draw
    if(player2 == player1)
        printf("Draw! Try Again.\n");
    
    else
    {
        
        switch (player1)
        {
            case 1:// Rock
                if(player2 == 2)// Paper
                    printf("Player 2, YOU WIN!!!\n");
                else// Scissors
                    printf("Player 1, YOU WIN!!!\n");
                break;
                
            case 2:// Paper
                if(player2 == 3)// Scissors
                    printf("Player 2, YOU WIN!!!\n");
                else// Rock
                    printf("Player 1, YOU WIN!!!\n");
                break;
                
            case 3:// Scissors
                if(player2 == 1)// Rock
                    printf("Player 2, YOU WIN!!!\n");
                else// Paper
                    printf("Player 1, YOU WIN!!!\n");
                break;
                
        }//switch
    }//else
}//void

void clear_keyboard_buffer (void)
{
    char ch;
    scanf("%c", &ch);
    while (ch != '\n')
    {
        scanf("%c", &ch);
    }
}
