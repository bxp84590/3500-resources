#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum
{
    ROCK,
    PAPER,
    SCISSORS
} hand_t;

int main(int argc, char *argv[])
{
    hand_t player;
    hand_t computer;
    
    srand(time(NULL));
    
    printf("Play a hand (0 = Rock, 1 = Paper, 2 = Scissors): ");
    scanf("%d", &player);
    
    computer = (hand_t)(rand() % 3);
    
    if (computer == ROCK)
    {
        printf("Computer played rock!\n");
    }
    if (computer == PAPER)
    {
        printf("Computer played paper!\n");
    }
    if (computer == SCISSORS)
    {
        printf("Computer played scissors!\n");
    }
    
    
    if (player == ROCK && computer == ROCK)
    {
        printf("It's a draw!\n");
    }
    else if (player == ROCK && computer == PAPER)
    {
        printf("You lose!\n");
    }
    else if (player == ROCK && computer == SCISSORS)
    {
        printf("You win!\n");
    }
    else if (player == PAPER && computer == ROCK)
    {
        printf("You win!\n");
    }
    else if (player == PAPER && computer == PAPER)
    {
        printf("It's a draw!\n");
    }
    else if (player == PAPER && computer == SCISSORS)
    {
        printf("You lose!\n");
    }
    else if (player == SCISSORS && computer == ROCK)
    {
        printf("You lose!\n");
    }
    else if (player == SCISSORS && computer == PAPER)
    {
        printf("You win!\n");
    }
    else if (player == SCISSORS && computer == SCISSORS)
    {
        printf("It's a draw!\n");
    }
    else
    {
        printf("Something bad happened!\n");
    }
    
    //printf("ROCK = %d, PAPER = %d, SCISSORS = %d\n", ROCK, PAPER, SCISSORS);
    
    return 0;
}

