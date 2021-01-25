//author = utkarsh agrawal;
//date_program-completed = 20-11-2020;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_number(int random)
{
    srand(time(NULL));
    return rand() % random;
}

int return1(char char1, char char2)
{

    if (char1 == char2)
    {
        return -1;
    }

    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char1 == 's') && (char2 == 'r'))
    {
        return 0;
    }

    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char1 == 'r') && (char2 == 'p'))
    {
        return 0;
    }

    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char1 == 'p') && (char2 == 's'))
    {
        return 0;
    }
    else
    {
        printf("choose a right number");
    }
}

int main()
{
    int player_score = 0;
    int computer_score = 0, input;
    char player_char, computer_char;
    char player_name[30];
    char dict[] = {'r', 'p', 's'};
    printf("welcome to utkarsh game\nplease enter your name\n");
    scanf("%s", player_name);
    printf("\n");
    printf("thanks for responding %s\nnow let's start our game\n", player_name);
    for (int i = 0; i < 3; i++)
    {

        printf("now %s's turn\n", player_name);
        printf("choose 1 for rock\n2 for paper\nand 3 for scissor\n");
        scanf("%d", &input);
        getchar();
        player_char = dict[input - 1];
        printf("you choose %c\n", player_char);

        printf("\n");

        printf("now computer's turn\n", player_name);
        input = random_number(2) + 1;
        computer_char = dict[input - 1];
        printf("cpu choose %c\n\n", computer_char);

        if (return1(computer_char, player_char) == 1)
        {
            computer_score += 1;
            printf("cpu wins this chance\n\n");
        }
        else if (return1(computer_char, player_char) == -1)
        {
            computer_score += 1;
            player_score += 1;
            printf("it's a draw\n\n");
        }
        else
        {
            player_score += 1;
            printf("you win this chance\n\n");
        }
        printf("%s: %d\nCPU: %d\n\n", player_name, player_score, computer_score);
    }
    if (player_score > computer_score)
    {
        printf("yes! you win\n");
        printf("you are awesome %s you defeated computer", player_name);
    }

    else if (computer_score > player_score)
    {
        printf("ohh no! you loose\n");
        printf("don't worry %s trypp again latter", player_name);
    }

    else
    {
        printf("no one wins\nit's a draw");
    }
}
