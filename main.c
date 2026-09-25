#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    char player[10];
    int computerscore = 0;
    int playerscore = 0;
    char *choices[] = {"rock", "paper", "scissors"};
    /*rock->0
      paper->1
      scissors->2
    */
    for (int i = 1; i <= 5; i++)
    {
        int computer = rand() % 3;

        printf("Choose 0 for rock🪨\nChoose 1 for paper📄\nChoose 2 for scissors✂️\n");
        printf("Enter q to quit\n");
        scanf("%s", player);

        printf("Computer chooses %s\n", choices[computer]);
        if (player[0] == 'q' || player[0] == 'Q')
        {
            break;
        }
        if (player[0] == '0' && computer == 0)
        {
            printf("Draw\n");
        }
        else if (player[0] == '0' && computer == 1)
        {
            printf("computer wins\n");
            computerscore++;
        }
        else if (player[0] == '0' && computer == 2)
        {
            printf("<*|Player wins|*>\n");
            playerscore++;
        }
        else if (player[0] == '1' && computer == 0)
        {
            printf("<*|Player wins|*>\n");
            playerscore++;
        }
        else if (player[0] == '1' && computer == 1)
        {
            printf("Draw\n");
        }
        else if (player[0] == '1' && computer == 2)
        {
            printf("computer wins\n");
            computerscore++;
        }
        else if (player[0] == '2' && computer == 0)
        {
            printf("computer wins\n");
            computerscore++;
        }
        else if (player[0] == '2' && computer == 1)
        {
            printf("<*|player wins*|>\n");
            playerscore++;
        }
        else if (player[0] == '2' && computer == 2)
        {
            printf("Draw\n");
        }
        else
        {
            printf("invalid input\n");
        }
    }
    printf("----*resuls*----\n");
    printf("player  |-| computer \n");
    printf("   %d    |-|    %d\n", playerscore, computerscore);
    printf("-----------------\n");

    if (playerscore > computerscore)
    {
        printf("Congratulations! YOU WIN🏆\n");
    }
    else if (computerscore > playerscore)
    {
        printf("Computer Wins\n");
    }
    else
    {
        printf("Match draws\n");
    }

    return 0;
}
