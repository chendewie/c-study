#include "call.h"

status p;
void memu()
{
	printf("***********************************\n");
	printf("1.���\n");
	printf("2.ɾ��\n");
	printf("3.����\n");
	printf("4.�޸�\n");
	printf("5.��ʾ\n");
	printf("6.���\n");
	printf("7.����\n");
	printf("0.�˳�\n");
	printf("***********************************\n");
}

void test()
{
	int i = 0;
	do
	{
		memu();
		printf("shuru:");
		scanf("%d", &i);
		switch (i)
		{
		case 1:myadd(&p);
			break;
		case 2:mydele(&p);
			break;
		case 3:myfind(&p);
			break;
		case 4:myrevise(&p);
			break;
		case 5:mydisplay(&p);
			break;
		case 6:myempty(&p);
			break;
		case 7:mysort(&p);
			break;
		case 0:
			SaveData(&p);//�����ݱ��浽�ļ���
			Free_data(&p);

			exit(1);
			break;
		default:
			printf("error\n");
			break;
		}
	} while (i);
}

int main()
{
	myinit(&p);
	test();
	return 0;
}