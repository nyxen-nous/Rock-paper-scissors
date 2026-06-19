#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer = rand() % 3;
    int computerscore, playerscore;
    char* choises[]={"rock", "paper", "scissors"};
    /*rock->0
      paper->1
      scissors->2
    */
   for (int i = 1; i < 6; i++)
   {
    int player, computer = rand() % 3;
    printf("Choose 0 for rock\nChoose 1 for paper\nChoose 2 for scissors\n");
    scanf("%d", &player);
    printf("Computer chooses %s\n", choises[computer]);

    if (player == 0 && computer == 0)
    {
        printf("withdraw\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("computer wins\n");
        computerscore++;
    }
    else if (player == 0 && computer == 2)
    {
        printf("Player wins\n");
        playerscore++;
    }
    else if (player == 1 && computer == 0)
    {
        printf("Player wins\n");
        playerscore++;
    }
    else if (player == 1 && computer == 1)
    {
        printf("withdraw\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("computer wins\n");
        computerscore++;
    }
    else if (player == 2 && computer == 0)
    {
        printf("computer wins\n");
        computerscore++;
    }
    else if (player == 2 && computer == 1)
    {
        printf("Player wins\n");
        playerscore++;
    }
    else if (player == 2 && computer == 2)
    {
        printf("withdraw\n");
    }
    else
    {
        printf("invalid input\n");
    }
   }
   printf("--*resuls*--\n");
   printf("player %d - computer %d\n",playerscore, computerscore);

   if (playerscore>computerscore)
   {
    printf("you wins\n");
   }
   else if (computerscore>playerscore)
   {
    printf("Computer wins\n");
   }
   else
   {
    printf("Match draws\n");
   }
   
   


    return 0;
}