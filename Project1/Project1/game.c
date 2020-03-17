#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;

		}
	}
}

void PrintBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
		if (i == col)
			printf("\n");
	}

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);

		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = HARD_COUNT;
	while (count)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int GetMineCount(char board[ROWS][COLS], int x, int y)
{
	return 
		board[x - 1][y] +
		board[x - 1][y - 1] +
		board[x][y - 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] +
		board[x][y + 1] +
		board[x - 1][y + 1] - 8 * '0';
}

int CountShowMine(char board[ROWS][COLS])//判断剩余未知区域的个数，个数为雷数时玩家赢
{
	int aaa = 0;
	int i = 0;
	int j = 0;
	for (i = 1; i <= ROWS-2; i++)
	{
		for (j = 1; j <= COLS-2; j++)
		{
			if (board[i][j] == '*')
			{
				aaa++;
			}
		}

	}
	return aaa;
}

void ClearMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int aaa = 0;
	//while(win<(row*col-HARD_COUNT))
	while (HARD_COUNT != (CountShowMine(show)))
	{
		printf("\n");
		printf("请输入排查坐标: ");
		scanf_s("%d%d", &x, &y);
		printf("——————————\n");
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("炸死了！\n");
				PrintBoard(mine, row, col);
				break;
				//return;
			}
			else
			{
				//tongjilei
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				OpenMine(mine, show, x, y);//展开 
				//win=win+OpenMine(mine,show,x,y)+'0'; 
				//int nume =OpenMine(mine,show,x,y);
				PrintBoard(mine, row, col);
				printf("\n");
				PrintBoard(show, row, col);
				//win= win+1+nume;
				//win++;
				if (HARD_COUNT == (CountShowMine(show)))
				{
					printf("恭喜您！排雷成功！\n");
					//OpenMine(mine,x,y);
					PrintBoard(mine, ROW, COL);
					printf("\n");
					PrintBoard(show, ROW, COL);
					break;
				}
			}
		}
		else
		{
			printf("坐标非法\n");

		}
	}
	//if(win ==row*col-HARD_COUNT)
/*	if(count_show_mine(show) == HARD_COUNT)
	{
		printf("排雷成功!\n");
		//OpenMine(mine,x,y);
		PrintBoard(mine,row,col);
	}*/
	//return 0;
}

void  OpenMine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int n = 0;
	//int num=0;
	if (mine[x - 1][y - 1] == '0')
	{
		show[x - 1][y - 1] = GetMineCount(mine, x - 1, y - 1) + '0';//显示该坐标周围雷数
		//n++;
	}
	if (mine[x - 1][y] == '0')
	{
		show[x - 1][y] = GetMineCount(mine, x - 1, y) + '0';//显示该坐标周围雷数
	   //n++;
	}
	if (mine[x - 1][y + 1] == '0')
	{
		show[x - 1][y + 1] = GetMineCount(mine, x - 1, y + 1) + '0';//显示该坐标周围雷数
		//n++;
	}
	if (mine[x][y - 1] == '0')
	{
		show[x][y - 1] = GetMineCount(mine, x, y - 1) + '0';//显示该坐标周围雷数
		//n++;
	}
	if (mine[x][y + 1] == '0')
	{
		show[x][y + 1] = GetMineCount(mine, x, y + 1) + '0';//显示该坐标周围雷数
		//n++;
	}
	if (mine[x + 1][y - 1] == '0')
	{
		show[x + 1][y - 1] = GetMineCount(mine, x + 1, y - 1) + '0';//显示该坐标周围雷数
		//n++
	}
	if (mine[x + 1][y] == '0')
	{
		show[x + 1][y] = GetMineCount(mine, x + 1, y) + '0';//显示该坐标周围雷数
		//n++;
	}
	if (mine[x + 1][y + 1] == '0')
	{
		show[x + 1][y + 1] = GetMineCount(mine, x + 1, y + 1) + '0';//显示该坐标周围雷数
		//++;
	}
	//num=n;
	//return n;
}

void SafeMine(char mine[ROWS][COLS], char show[ROWS][COLS])//避免第一次炸死
{
	int x = 0;
	int y = 0;
	char ch = 0;
	int count = 0;
	int ret = 1;
	printf("输入坐标扫雷:");
	while (1)
	{
		scanf_s("%d%d", &x, &y);//只能输入1到10，输入错误重新输入
		if ((x >= 1 && x <= 10) && (y >= 1 && y <= 10))//判断输入坐标是否有误
		{
			if (mine[x][y] == '1')//第一次踩到雷后补救
			{
				mine[x][y] = '0';
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';//数字对应的ASCII值和数字字符对应的ASCII值相差48，即'0'的ASCII值
				OpenMine(mine, show, x, y);
				while (ret)//在其余有空的地方设置一个雷
				{
					int x = rand() % 9 + 1;//产生1到10的随机数，在数组下标为1到10的范围内布雷
					int y = rand() % 9 + 1;//产生1到10的随机数，在数组下标为1到10的范围内布雷
					if (mine[x][y] == '0')//找不是雷的地方布雷
					{
						mine[x][y] = '1';
						ret--;
						break;
					}
				}break;//跳出此函数  
			}
			if (mine[x][y] == '0')
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';//数字对应的ASCII值和数字字符对应的ASCII值相差48，即'0'的ASCII值
				OpenMine(mine, show, x, y);
				break;
			}
		}
		else//坐标错误
		{
			printf("输入错误重新输入\n");
		}
	}
}








