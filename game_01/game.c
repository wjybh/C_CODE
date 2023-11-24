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

void PlayerMove(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("玩家下棋:>\n");
    while(1)
    {
        printf("请输入下棋坐标:> ");
        scanf("%d %d", &x, &y);
        //坐标范围合法的判断
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (board[x-1][y-1] == ' ')
            {
                board[x-1][y-1] = '*';
                break;
            }
            else
            {
                printf("坐标被占用，请选择其他位置");
            }
        }
        else
        {
            printf("非法坐标，请重新输入\n");
        }
    }   
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
    printf("电脑下棋:>\n");
    int x = 0;
    int y = 0;
    while (1)
    {
        x = rand()%row;
        y = rand()%col;
        if (board[x][y] == ' ')
        {
            board[x][y] = '#';
            break;
        }
    } 
}

int IsFull(char board[ROW][COL], int row, int col)
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (board[i][j] == ' ')
            {
                return 0;
            }
        }
        
    }
    return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
    //行
    for (int i = 0; i < row; i++)
    {
        if(board[i][0]==board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
        {
            return board[i][1];
        }
    }
    //列
    for (int j = 0; j < col; j++)
    {
        if(board[0][j]==board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
        {
            return board[1][j];
        }
    }
    //对角线
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    //没人赢的情况下，平局
    if(IsFull(board, ROW, COL))
    {
        return 'Q';
    }
    return 'C';
}

