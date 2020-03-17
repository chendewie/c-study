#ifndef _GAME_H_
#define _GAME_H_
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10
#define HARD_COUNT 66

void InitBoard(char board[ROWS][COLS],int rows,int cols,char set);
void PrintBoard(char board[ROWS][COLS],int row,int col);
void SetMine(char board[ROWS][COLS],int row,int col);
void ClearMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
int GetMineCount(char board[ROWS][COLS],int x,int y);
//int OpenMine(char mine[ROWS][COLS],char show[ROWS][COLS],int x,int y);
void OpenMine(char mine[ROWS][COLS],char show[ROWS][COLS],int x,int y);
int count_show_mine(char board[ROW][COL]);

#endif// _GAME_H_
