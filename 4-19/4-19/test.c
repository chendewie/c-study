#include "call.h"

status p;
void memu()
{
	printf("***********************************\n");
	printf("1.添加\n");
	printf("2.删除\n");
	printf("3.查找\n");
	printf("4.修改\n");
	printf("5.显示\n");
	printf("6.清空\n");
	printf("7.排序\n");
	printf("0.退出\n");
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
			SaveData(&p);//把数据保存到文件内
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