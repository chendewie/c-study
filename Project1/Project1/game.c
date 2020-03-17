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

int CountShowMine(char board[ROWS][COLS])//�ж�ʣ��δ֪����ĸ���������Ϊ����ʱ���Ӯ
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
		printf("�������Ų�����: ");
		scanf_s("%d%d", &x, &y);
		printf("��������������������\n");
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("ը���ˣ�\n");
				PrintBoard(mine, row, col);
				break;
				//return;
			}
			else
			{
				//tongjilei
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				OpenMine(mine, show, x, y);//չ�� 
				//win=win+OpenMine(mine,show,x,y)+'0'; 
				//int nume =OpenMine(mine,show,x,y);
				PrintBoard(mine, row, col);
				printf("\n");
				PrintBoard(show, row, col);
				//win= win+1+nume;
				//win++;
				if (HARD_COUNT == (CountShowMine(show)))
				{
					printf("��ϲ�������׳ɹ���\n");
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
			printf("����Ƿ�\n");

		}
	}
	//if(win ==row*col-HARD_COUNT)
/*	if(count_show_mine(show) == HARD_COUNT)
	{
		printf("���׳ɹ�!\n");
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
		show[x - 1][y - 1] = GetMineCount(mine, x - 1, y - 1) + '0';//��ʾ��������Χ����
		//n++;
	}
	if (mine[x - 1][y] == '0')
	{
		show[x - 1][y] = GetMineCount(mine, x - 1, y) + '0';//��ʾ��������Χ����
	   //n++;
	}
	if (mine[x - 1][y + 1] == '0')
	{
		show[x - 1][y + 1] = GetMineCount(mine, x - 1, y + 1) + '0';//��ʾ��������Χ����
		//n++;
	}
	if (mine[x][y - 1] == '0')
	{
		show[x][y - 1] = GetMineCount(mine, x, y - 1) + '0';//��ʾ��������Χ����
		//n++;
	}
	if (mine[x][y + 1] == '0')
	{
		show[x][y + 1] = GetMineCount(mine, x, y + 1) + '0';//��ʾ��������Χ����
		//n++;
	}
	if (mine[x + 1][y - 1] == '0')
	{
		show[x + 1][y - 1] = GetMineCount(mine, x + 1, y - 1) + '0';//��ʾ��������Χ����
		//n++
	}
	if (mine[x + 1][y] == '0')
	{
		show[x + 1][y] = GetMineCount(mine, x + 1, y) + '0';//��ʾ��������Χ����
		//n++;
	}
	if (mine[x + 1][y + 1] == '0')
	{
		show[x + 1][y + 1] = GetMineCount(mine, x + 1, y + 1) + '0';//��ʾ��������Χ����
		//++;
	}
	//num=n;
	//return n;
}

void SafeMine(char mine[ROWS][COLS], char show[ROWS][COLS])//�����һ��ը��
{
	int x = 0;
	int y = 0;
	char ch = 0;
	int count = 0;
	int ret = 1;
	printf("��������ɨ��:");
	while (1)
	{
		scanf_s("%d%d", &x, &y);//ֻ������1��10�����������������
		if ((x >= 1 && x <= 10) && (y >= 1 && y <= 10))//�ж����������Ƿ�����
		{
			if (mine[x][y] == '1')//��һ�βȵ��׺󲹾�
			{
				mine[x][y] = '0';
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';//���ֶ�Ӧ��ASCIIֵ�������ַ���Ӧ��ASCIIֵ���48����'0'��ASCIIֵ
				OpenMine(mine, show, x, y);
				while (ret)//�������пյĵط�����һ����
				{
					int x = rand() % 9 + 1;//����1��10����������������±�Ϊ1��10�ķ�Χ�ڲ���
					int y = rand() % 9 + 1;//����1��10����������������±�Ϊ1��10�ķ�Χ�ڲ���
					if (mine[x][y] == '0')//�Ҳ����׵ĵط�����
					{
						mine[x][y] = '1';
						ret--;
						break;
					}
				}break;//�����˺���  
			}
			if (mine[x][y] == '0')
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';//���ֶ�Ӧ��ASCIIֵ�������ַ���Ӧ��ASCIIֵ���48����'0'��ASCIIֵ
				OpenMine(mine, show, x, y);
				break;
			}
		}
		else//�������
		{
			printf("���������������\n");
		}
	}
}








