#include "game.h"
//��һ�� ��ը��
//չ�� 
void menu()
{
	printf("**************************\n");
	printf("***1.play        0.exit***\n");
	printf("**************************\n");
 } 

void game()
{
	char mine[ROWS][COLS]={0};//ԭʼ����Ϣ 
	char show[ROWS][COLS]={0};	//չʾ��Ϣ 
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');//��ʼ�� 
	
	//buzhi
	SetMine(mine,ROW,COL);
	PrintBoard(mine,ROW,COL);
	printf("\n");
	PrintBoard(show,ROW,COL);//��ӡ 
	//pailei
	ClearMine(mine,show,ROW,COL);
	

}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&input);
		printf("��������������������\n");
		switch(input)
		{
			case 1:game();
			break;
			case 0:printf("�˳���Ϸ��\n");
			break;
			default:printf("ѡ�����\n");
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
