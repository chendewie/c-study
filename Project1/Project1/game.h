#ifndef _GAME_H_
#define _GAME_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 11
#define HARD_COUNT 61

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void PrintBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void ClearMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int GetMineCount(char board[ROWS][COLS], int x, int y);
void OpenMine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);
int CountShowMine(char board[ROWS][COLS]);
void SafeMine(char mine[ROWS][COLS], char show[ROWS][COLS]);

#endif// _GAME_H_