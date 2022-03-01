#include "stdio.h"

const int NOUGHTS = 1;
const int CROSSES = 2;
const int BORDER = 3;
const int EMPTY = 0;

const int ConvertTo25[9] = {
    6,7,8,
    11,12,13,
    16,17,18
};

void InitialiseBoard(int *board)
{
    for (int index = 0; index < 25; index++)
    {
        board[index] = BORDER;
    }

    for (int index = 0; index < 9; index++)
    {
        board[ConvertTo25[index]] = EMPTY;
    }
    
}

void Printboard ( const int *board){
    printf("\n Board: \n");
    for (int index = 0; index < 25; index++)
    {
        if (index!=0 && index%5==0)
        {
            printf("\n");
        }
        printf("%4d",board[index]);
        
    }
    printf("\n");
   
    
}

int main()  {

    int board[25];
    InitialiseBoard(&board[0]);
    board[ConvertTo25[0]]= CROSSES;
    Printboard(&board[0]);

    return 0;

}