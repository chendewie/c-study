
#include "game.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu()
{
	printf("**************************\n");
	printf("***1.play        0.exit***\n");
	printf("**************************\n");
 } 

void game()
{
	char board[ROW][COL]={0};
	char win = 0;
	InitBoard(board,ROW,COL);
	PrintBoard(board,ROW,COL);
	while(1)
	{
		PlayerMove(board,ROW,COL);
		PrintBoard(board,ROW,COL);
		win = CheckWin(board,ROW,COL);
		
		if (win!=' ')
			break; 
			
		ComputerMove(board,ROW,COL); 
		PrintBoard(board,ROW,COL);
		win = CheckWin(board,ROW,COL);
		
		if (win!=' ')
			break; 
	}
	if(win == 'X')
	{
		printf("玩家胜\n");
	}
	else if(win == '0')
	{
		printf("电脑胜\n");
	}
	else if(win == 'Q')
	{
		printf("平局\n");
	}
 }

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d",&input);
		switch(input)
		{
			case 1:game();
			break;
			case 0:printf("退出游戏！\n");
			break;
			default:printf("选择错误！\n");
			break; 
		}
	}
	while(input);
 } 

int main(int argc, char *argv[]) 
{
	test() ;
	return 0;
}
