#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 4996)

#include <stdio.h>
int main()
{
	int a = 10;
	int b = ~a;
	printf("%d", b);
	return 0;
}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		printf("max=%d \n", a);
//		return;
//	}
//	else if (a < b)
//	{
//		printf("max=%d \n", b);
//		return;
//	}
//	printf("一样大\n");
//	return 0;
//}
//int main()
//{
//	printf("asdasdsadsa\n");
//	return 0;
//}
//void Max(int a,int b)
//{
//	if (a > b)
//
//	{
//		printf("max=%d \n", a);
//		return;
//	}
//	else if (a < b)
//	{
//		printf("max=%d \n", b);
//		return;
//	}
//	printf("一样大\n");
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	Max(a, b);
//	return 0;
//}