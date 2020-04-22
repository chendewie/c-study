#include "call.h"

int Find(status* p, char* pname)
{
	int i = 0;
	for (i = 0; i < (p->count); i++)
	{
		if (strcmp(p->num[i].name, pname) == 0)
			return i;
	}
	return -1;
}
void menu1()
{
	printf("*******************\n");
	printf("1.name   2.sex\n");
	printf("3.age    4.tele\n");
	printf("5.addr   0.return\n");
	printf("*******************\n");
}
void myinit(status* p)//chushihua
{
	//int count = sizeof(p->num);
	//p->count = 0;
	//memset(p->num, 0, count);
	p->count = 0;
	p->v = 5;
	p->num = (callman*)malloc(5 * sizeof(callman));
	if (p->num == NULL)
	{
		printf("out of menory");
		exit(1);
	}
	//p->count = 0;
	else
	{
		DownLoad(p);
	}
	//memset(p->num, 0, count);
}
//void myadd(status* p)//tianjia
//{
//	printf("xinming:\n");
//	scanf("%s", p->num[p->count].name);
//	printf("xinbie:\n");
//	scanf("%s", p->num[p->count].sex);
//	printf("nianling:\n");
//	scanf("%d", &(p->num[p->count].age));
//	printf("telenum:\n");
//	scanf("%s", p->num[p->count].tel);
//	printf("address:\n");
//	scanf("%s", p->num[p->count].addr);
//	if (p->count > 1000)
//	{
//		printf("shangxian\n");
//	}
//	else
//	{
//		printf("success\n");
//		p->count++;
//	}
//
//}
void myadd(status* p)//tianjia
{
	if (p->count == p->v)
	{
		callman* tmp = (callman*)realloc(p->num, sizeof(callman) * (p->v + 5));
		if (tmp == NULL)
			printf("%s", strerror(errno));
		else
			p->num = tmp;
		p->v += 5;
	}
	printf("xinming:\n");
	scanf("%s", p->num[p->count].name);
	printf("xinbie:\n");
	scanf("%s", p->num[p->count].sex);
	printf("nianling:\n");
	scanf("%d", &(p->num[p->count].age));
	printf("telenum:\n");
	scanf("%s", p->num[p->count].tel);
	printf("address:\n");
	scanf("%s", p->num[p->count].addr);
	p->count++;

}

void mydele(status* p)//shanchu
{
	char name[20] = { 0 };
	int result = 0;
	int n = 0;
	int i = 0;
	printf("dele name\n");
	scanf("%s", name);
	result = Find(p, name);
	if (result != -1)
	{
		printf("shifousanchu?\n");
		printf("yes.1   no.0\n");
		scanf("%d", &n);
		if (1 == n)
		{
			for (i = result; i < (p->count) - 1; i++)
			{
				p->num[i] = p->num[i + 1];
			}
			p->count--;
			printf("success\n");
		}
		else
		{
			printf("fail\n");
		}
	}
	else
	{
		printf("bucinzai\n");
	}
}
void myfind(status* p)//chauzhao
{
	char name[20] = { 0 };
	int result = 0;
	printf("find name:\n");
	scanf("%s", name);
	result = Find(p, name);
	if (result != -1)
	{
		printf("name:%s\n", p->num[result].name);
		printf("sex:%s\n", p->num[result].sex);
		printf("age:%d\n", p->num[result].age);
		printf("tel:%s\n", p->num[result].tel);
		printf("addr:%s\n", p->num[result].addr);
	}
	else
	{
		printf("bucinzai\n");
	}
}
void myrevise(status* p)//xiugai
{
	char name[20] = { 0 };
	int result = 0;
	printf("input xiugainame\n");
	scanf("%s", name);
	result = Find(p, name);
	if (result != -1)
	{
		printf("name:%s\n", p->num[result].name);
		printf("sex:%s\n", p->num[result].sex);
		printf("age:%d\n", p->num[result].age);
		printf("tel:%s\n", p->num[result].tel);
		printf("addr:%s\n", p->num[result].addr);
		int i = 0;
		do {
			menu1();
			printf("shuruxiugaixiang:\n");
			scanf("%d", &i);
			switch (i)
			{
			case 1:
				printf("name:");
				scanf("%s", p->num[result].name);
				break;
			case 2:
				printf("sex:");
				scanf("%s", p->num[result].sex);
				break;
			case 3:
				printf("age:");
				scanf("%d", &(p->num[result].age));
				break;
			case 4:
				printf("telenum:");
				scanf("%s", p->num[result].tel);
				break;
			case 5:
				printf("address:");
				scanf("%s", p->num[result].addr);
				break;
			case 0:
				break;
			default:
				printf("error");
				break;
			}
		} while (i);
	}
	else
	{
		printf("bucunzai!\n");
	}
}
void mydisplay(status* p)//xianshi
{
	int i = 0;
	printf("shuchuxinxi\n");
	printf("%10s%7s%6s%8s%10s\n", "name", "sex", "age", "tele", "addr");
	for (i = 0; i < (p->count); i++)
	{
		printf("%11s", p->num[i].name);
		printf("%5s", p->num[i].sex);
		printf("%5d", p->num[i].age);
		printf("%10s", p->num[i].tel);
		printf("%12s", p->num[i].addr);
		printf("\n");
	}
}
void myempty(status* p)//qingkong
{
	p->count = 0;
}
void mysort(status* p)//paixu
{
	int i = 0;
	int j = 0;
	for (i = 0; i < p->count - 1; i++)
	{
		for (j = 0; j < p->count - 1 - i; j++)
		{
			if (strcmp(p->num[j].name, p->num[j + 1].name) > 0)
			{
				callman tmp;
				tmp = p->num[j];
				p->num[j] = p->num[j + 1];
				p->num[j + 1] = tmp;
			}
		}
	}
}


void Free_data(status* p)
{
	free(p->num);
	p->v = 0;
	p->count = 0;
}
void SaveData(status* p)//保存数据到文件流 ,SaveData 的调用放在退出程序之前
{
	int i = 0;
	FILE* pf = fopen("tongxunlu.txt", "w");
	if (pf == NULL)
	{
		perror("open file for write");
		exit(1);
	}
	for (i = 0; i < p->count; i++)
	{
		fwrite(&(p->num[i]), sizeof(callman), 1, pf);
	}
	fclose(pf);
}


void DownLoad(status* p)//从文件里读取数据  
{
	int i = 0;
	callman tmp = { 0 };
	FILE* pf = fopen("tongxunlu.txt", "r");
	if (pf == NULL)
	{
		perror("open file for read");
		exit(1);
	}

	while (fread(&tmp, sizeof(callman), 1, pf))
	{
		//check(p);
		if (p->count == p->v)
		{
			callman* tmp = (callman*)realloc(p->num, sizeof(callman) * (p->v + 5));
			if (tmp == NULL)
				printf("%s", strerror(errno));
			else
				p->num = tmp;
			p->v += 5;
		}

		p->num[i] = tmp;
		i++;
		p->count++;//每读入一个数据，当前数据数目count就增加一个；  
	}
}