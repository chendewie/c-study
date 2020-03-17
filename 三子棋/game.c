
#include "game.h"

void PrintBoard(char board[ROW][COL],int row,int col)
{
	int i=0;
	for (i=0;i<row;i++)
	{
		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);//可以修改，循环 
		if (i<(row-1))
		printf("---|---|---\n");
	}
}

void InitBoard(char board[ROW][COL], int row, int col)
{
	/*int i=0;
	int j=0;
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			board[i][j] = '0';
			
		}
	 } */
	 memset(&board[0][0], ' ', row*col*sizeof(board[0][0]));
	 
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x=0;
	int y=0;
	printf("玩家走:-> ");
	while(1)
	{
		printf("请输入坐标：");
		scanf("%d%d",&x,&y);
		if (x>=1 && x<=row && y>=1 && y<=col)
		{
			if(board[x-1][y-1] == ' ') 
			{
				board[x-1][y-1] = 'X';
				break;
			}
			else
			{
				printf("坐标被占用，请重输入。\n");
			}
		}
		
		else
		{
			printf("坐标不合法！\n");
			 
		 } 
	 } 
	
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x=0;
	int y=0;
	printf("电脑走->\n");
	while(1)
	{
		x=rand()%row;
		y=rand()%col;
		if(board[x][y] == ' ')
		{
			board[x][y]='0';
			break;
		}
	}
} 

int IsFull(char board[ROW][COL], int row, int col)
{
	int i=0;
	int j=0;
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			if(board[i][j] == ' ')
			return 0;
		}
	}
	return 1;
}

char CheckWin(char board[ROW][COL], int row, int col)
{
	int i=0;
	
	for(i=0;i<row;i++) 
	{
		if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][0]!=' ')
		{
			return board[i][0];
		}
	}
	for(i=0;i<col;i++) 
	{
		if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[0][i]!=' ')
		{
			return board[0][i];
		}
	}
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2]&& board[0][0]!=' ') 
	{
		return board[1][1];
	} 
	if(board[0][2] == board[1][1] && board[1][1] == board[2][0]&& board[0][2]!=' ') 
	{
		return board[1][1];
	} 
	//pinju
	if(IsFull(board,row,col)==1)
	{
		return 'Q';
	}
	//jixu
	return ' ';
} 










