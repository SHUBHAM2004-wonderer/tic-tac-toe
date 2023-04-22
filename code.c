#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

char arr[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'}; // We use char instead of int as these numbers are gonna be replaced be X and O in the __GCC_ATOMIC_INT_LOCK_FREE
int win();
int board();

int main()
{
    int choice, player = 1;
    char mark;
    int i;
    do
    {
        board();
        player = (player % 2) ? 1 : 2; // Find the reminder and if it is odd,player is assigned value 1
        printf("\nPlayer %d, enter your choice on the board ", player);
        scanf("%d", &choice);

        // printf("%d", choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && arr[1] == '1')
        {
            arr[1] = mark;
        }
        else if (choice == 2 && arr[2] == '2')
        {
            arr[2] = mark;
        }
        else if (choice == 3 && arr[3] == '3')
        {
            arr[3] = mark;
        }
        else if (choice == 4 && arr[4] == '4')
        {
            arr[4] = mark;
        }
        else if (choice == 5 && arr[5] == '5')
        {
            arr[5] = mark;
        }
        else if (choice == 6 && arr[6] == '6')
        {
            arr[6] = mark;
        }
        else if (choice == 7 && arr[7] == '7')
        {
            arr[7] = mark;
        }
        else if (choice == 8 && arr[8] == '8')
        {
            arr[8] = mark;
        }
        else if (choice == 9 && arr[9] == '9')
        {
            arr[9] = mark;
        }
        else
        {
            printf("Place already occupied");
            player--;
            getch();
        }
        i = win();
        player++;

    } while (i == -1);
    board();
    if (i == 1)
    {
        printf("\nPlayer %d wins", --player);
        printf("\nCongrats");
    }
    else
    {
        printf("\nDRAW!!!!!");
        printf("Game Over");
    }

    return 0;
}

int win()
{
    // 1 means that someone hass won the game aand the game will be terminated
    if (arr[1] == arr[2] && arr[2] == arr[3])
    {
        return 1;
    }
    else if (arr[1] == arr[4] && arr[4] == arr[7])
    {
        return 1;
    }
    else if (arr[1] == arr[5] && arr[5] == arr[9])
    {
        return 1;
    }
    else if (arr[2] == arr[5] && arr[5] == arr[8])
    {
        return 1;
    }
    else if (arr[3] == arr[6] && arr[6] == arr[9])
    {
        return 1;
    }
    else if (arr[3] == arr[5] && arr[5] == arr[7])
    {
        return 1;
    }
    else if (arr[4] == arr[5] && arr[6] == arr[5])
    {
        return 1;
    }
    else if (arr[7] == arr[8] && arr[8] == arr[9])
    {
        return 1;
    }
    else if (arr[1] != '1' && arr[2] != '2' && arr[3] != '3' && arr[4] != '4' && arr[5] != '5' && arr[6] != '6' && arr[7] != '7' && arr[8] != '8' && arr[9] != '9')
    {
        return 0; // 0 means game ended in a draw
    }
    else
    {
        return -1; //-1 means game is still going on
    }
}

int board()
{
    system("cls"); // Clears the screen after one input
    printf("\n     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", arr[1], arr[2], arr[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", arr[4], arr[5], arr[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  ", arr[7], arr[8], arr[9]);

    return 0;
}
