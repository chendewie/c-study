#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 4996)

#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	scanf("%d", &k);
	for (i = 1; i <= k; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
//void my_swap(int* i, int* j)
//{
//	int tmp = 0;
//	tmp = *i;
//	*i = *j;
//	*j = tmp;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf("%d%d", &i, &j);
//	printf("交换前:i=%d,j=%d\n", i, j);
//	my_swap(&i, &j);
//	printf("交换后:i=%d,j=%d\n", i, j);
//	return 0;
//}
//int my_leapyear(int i)
//{
//	if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	printf("请输入年份:");
//	scanf("%d", &year);
//	if (my_leapyear(year) == 1)
//	{
//		printf("%d是闰年\n",year);
//	}
//	else
//	{
//		printf("%d不是闰年\n", year);
//	}
//	return 0;
//}
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d \n", count);
//	return 0;
//}
//int main()
//{
//	int N = 0;
//	int M = 0;
//	int red= 0;
//	int blue = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d%d", &N, &M);
//	for (i = 0; i <= 100000000;i++)
//	{
//		for (j = 1; j <= 100000000;j++)
//		{
//			red = i;
//			blue = j;
//			if ((M * red) == (((N - M) - 1) * red + blue))
//			{
//				printf("%d", blue);
//			}
//		}
//		
//	}
//	return 0;
//}
//typedef struct Dnode {
//	int data;
//	struct Dnode* next;
//}Dnode;
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	scanf("%d%d", &n, &m);
//	for (i = 1; i <= n; i++)
//	{
//		
//	}
//	return 0;
//}
