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
		printf("�������:");
		scanf("%d",&input);
		if(input == num)
		{
			printf("�¶��ˣ�\n");
			break;
		}
		else if(input>num)
		{
			printf("���ˣ�\n");
	
		}
		else if(input<num)
		{
			printf("С�ˣ�\n");
	
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
		printf("��ѡ��#");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�Ƴ���");
			break;
		default:
			printf("������� ��������#");
			break;
		}
	}
	while(input);
	system("cls");
	return 0;
}
