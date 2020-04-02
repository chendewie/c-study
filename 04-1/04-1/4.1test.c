#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 4996)
//#include<iostream>
//using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//i是几位数
		int n = 1;
		int sum = 0;
		int tmp = i;
		while (tmp / 10)
		{
			n++;
			tmp /= 10;
		}
		//i的每一位的位数次方和
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		//判断
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
//int main() 
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (int i = 0; i < 7; i++) 
//	{
//		for (int j = 0; j < 7 - i; j++) 
//		{
//			printf(" ");
//		}
//		for (int k = 0; k < 2 * i + 1; k++) 
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (int i = 1; i <= 6; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (int k = 0; k < 13 - i * 2; k++) 
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int n = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		i = n / 10000;
//
//	}
//	return 0;
//}

////全局变量
//int g_a = 10;
//int g_b = 10;
//
////全局常量
//const int c_g_a = 10;
//const int c_g_b = 10;
//int main()
//{
//	//局部变量
//	int a = 10;
//	int b = 10;
//
//	//打印地址
//	cout << "局部变量a地址为： " << (int)&a << endl;
//	cout << "局部变量b地址为： " << (int)&b << endl;
//
//	cout << "全局变量g_a地址为： " << (int)&g_a << endl;
//	cout << "全局变量g_b地址为： " << (int)&g_b << endl;
//
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "静态变量s_a地址为： " << (int)&s_a << endl;
//	cout << "静态变量s_b地址为： " << (int)&s_b << endl;
//
//	cout << "字符串常量地址为： " << (int)&"hello world" << endl;
//	cout << "字符串常量地址为： " << (int)&"hello world1" << endl;
//	cout << "全局常量c_g_a地址为： " << (int)&c_g_a << endl;
//	cout << "全局常量c_g_b地址为： " << (int)&c_g_b << endl;
//
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << "局部常量c_l_a地址为： " << (int)&c_l_a << endl;
//	cout << "局部常量c_l_b地址为： " << (int)&c_l_b << endl;
//
//	return 0;
//}

//int* func()
//{
//	int a = 10;
//	return &a;
//}
//
//int main() {
//
//	int* p = func();
//
//	cout << *p << endl;
//	cout << *p << endl;
//
//	system("pause");
//
//	return 0;
//}

//int* func()
//{
//	int* a = new int(10);
//	return a;
//}
//
//int main() {
//
//	int* p = func();
//
//	cout << *p << endl;
//
//	cout << *p << endl;
//
//	system("pause");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//	int num = 0;
//	int n = 0;
//	int i = 0;
//	int p = 0;
//	int q = 0;
//	scanf("%d", &num);
//	scanf("%d", &n);
//	for(i=1;i<=n;i++)
//	{
//		p = p * 10 + num;
//		q = q + p;
//	}
//	printf("%d \n", q);
//	return 0;
//}
//int main() {
//    char str[] = "hello bit";
//    int size = strlen(str);
//    char* p = str;
//    int a = size / 2;
//    int b = 0;
//    int i = 0;
//    for (i; i < a; i++) {
//        int tmp;
//        tmp = *(p + i);
//        *(p + i) = *(p + size - 1 - i);
//        *(p + size - 1 - i) = tmp;
//    }
//    puts(str);
//    system("pause");
//    return 0;
//}
//
//void myreverse(int* arr, int len)
//{
//	int i = 0;
//	int j = len - 1;
//	char* p = arr;
//	while (i <= j)
//	{
//		char tmp = *(p + i);
//		*(p + i) = *(p + j);
//		*(p + j) = tmp;
//		i++;
//		j--;
//	}
//}
//int main()
//{
//	char arr[] = "I LOVE STUDY!";
//	int len = strlen(arr);
//	myreverse(arr, len);
//	puts(arr);
//	return 0;
//}
//void myprint(int* arr,int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	myprint(arr,len);
//	return 0;
//}
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}

