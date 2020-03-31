#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 4996)

#include<stdio.h>
void myprint(int arr1[],int arr2[], int len)
{
	int i = 0;
	printf("arr1= ");
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("arr2= ");
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
}
int main()
{
	int i = 0;
	int arr1[] = { 11,22,33,44,55,66,77,88,99 };
	int arr2[] = { 9,8,7,6,5,4,3,2,1 };
	int len = sizeof(arr1) / sizeof(arr1[0]);
	myprint(arr1, arr2, len);
	for (i = 0; i < len; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	printf("½»»»ºó\n");
	myprint(arr1, arr2, len);
	return 0;
}
//void myprint(int arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void reverse(int arr[],int len)
//{
//	int i = 0;
//	int j = len - 1;
//	while (j >= i)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//		i++;
//		j--;
//	}
//}
//void init(int arr[],int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		arr[i] = 0;
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	myprint(arr, len);
//	reverse(arr, len);
//	printf("\n");
//	myprint(arr, len);
//	init(arr, len);
//	printf("\n");
//	myprint(arr, len);
//	return 0;
//}
//void mybubble(int arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len-1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//}
//void myprint(int arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i <len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	myprint(arr, len);
//	mybubble(arr, len);
//	printf("\n");
//	myprint(arr, len);
//	printf("\n");
//	return 0;
//}