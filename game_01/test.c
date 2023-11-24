// #include <stdio.h>
#include "game.h"

void menu()
{
    printf("*******************************\n");
    printf("********    1. play    ********\n");
    printf("********    0. exit    ********\n");
    printf("*******************************\n");
}

void game()
{
    char ret = 0;
    char board[ROW][COL] = {0};
    InitBoard(board,ROW,COL);
    DisplayBoard(board, ROW, COL);
    while(1)
    {
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);    
        //判断输赢
        ret = IsWin(board, ROW, COL);
        if (ret != 'C')
        {
            break;
        }  
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //判断输赢
        ret = IsWin(board, ROW, COL);
        if (ret != 'C')
        {
            break;
        } 
    }
    if (ret == '*')
    {
        printf("玩家赢\n");
    }
    else if (ret == '#')
    {
        printf("电脑赢\n");
    }
    else
    {
        printf("平局\n");
    }
}

int main()
{
    int input = 0;
    do
    {
        menu();//打印菜单
        printf("请选择:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;  
        case 0:
            printf("退出游戏\n");
            break;   
        default:
            printf("选择错误!\n");
            break;
        }
    } while (input);
    return 0;
}