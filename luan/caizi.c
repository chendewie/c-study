#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h> 
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu()
{
	printf("******************\n");
	printf("*1.play    0.exit*\n");
	printf("******************\n");
}
void game()
{
	int num=0;
	int input = 0;
	num =rand()%100+1;

	while(1)
	{
		printf("请猜数字:");
		scanf("%d",&input);
		if(input == num)
		{
			printf("猜对了！\n");
			break;
		}
		else if(input>num)
		{
			printf("大了！\n");
	
		}
		else if(input<num)
		{
			printf("小了！\n");
	
		}
	}
}
int main(int argc, char *argv[])
{
	
	int input=0;
	srand ((unsigned int)time(NULL));
	 
	do
	{
		menu();
		printf("请选择#");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("推出！");
			break;
		default:
			printf("输入错误 请重输入#");
			break;
		}
	}
	while(input);
	system("cls");
	return 0;
}
