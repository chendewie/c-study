#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 4996)

#include<stdio.h>
#include<string.h>
#include<time.h>
#include<windows.h>

//#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int sum = 0;
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("%d", sum);
}
//int main()
//{
//	char arr1[] = "welcome to china";
//	char arr2[] = "****************";
//	int len = strlen(arr1);
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//
//}

//int main()
//{
//	char a[] = "qwer";
//	char b[] = { 'q','w','e','r',0};
//	
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(b));
//	printf("%d\n", strlen(a));
//	printf("%d\n", strlen(b));
//	return 0;
////}
//
//int main()
//{
//	int i = 0;
//	int a[10] = {0};
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", a[i]);
//	}
//	
//	return 0;
//}

//void menu()
//{
//	printf("#######################\n");
//	printf("1.play\n");
//	printf("0.exit\n");
//	printf("#######################\n");
//}
//void game()
//{
//	int input = 0;
//	int num = rand() % 100 + 1;
//	while (1)
//	{
//		printf("输入数字：");
//		scanf("%d", &input);
//		if (input > num)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("答对了！\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int w = 0;
//	srand((unsigned)time(NULL));
//	do {
//		menu();
//		printf("请选择：");
//		scanf("%d", &w);
//		switch (w)
//		{
//		case 1:game(); 
//			break;
//		case 0:
//			break;
//		default:
//			printf("请重新输入！\n"); break;
//		}
//	} while (w);
//	return 0;
//}

//int main()
//{
//	int a[] = { 11,22,33,44,55,66,77,88,99,0 };
//	int len = sizeof(a) / sizeof(a[0])-1;
//	int left = 0;
//	int right = len;
//	//int key = 66;
//	int key = 10000;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (a[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//
//	if (left <= right)
//	{
//		printf("找到了,下标为%d\n", mid);
//	}
//	else
//		printf("找不到!\n");
//	return 0;
//}