#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        //打印数据
        // printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        for (int j = 0; j < col; j++)
        {
            printf(" %c ", board[i][j]);
            if (j<col-1)
                printf("|");
        }
        printf("\n");
        //打印分割信息
        if (i<row-1)
        {
            // printf("---|---|---\n");
            for (int j = 0; j < col; j++)
            {
                printf("---");
                if (j<col-1)
                    printf("|");
            }
            printf("\n");
        }         
    }
}