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
		//i�Ǽ�λ��
		int n = 1;
		int sum = 0;
		int tmp = i;
		while (tmp / 10)
		{
			n++;
			tmp /= 10;
		}
		//i��ÿһλ��λ���η���
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		//�ж�
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

////ȫ�ֱ���
//int g_a = 10;
//int g_b = 10;
//
////ȫ�ֳ���
//const int c_g_a = 10;
//const int c_g_b = 10;
//int main()
//{
//	//�ֲ�����
//	int a = 10;
//	int b = 10;
//
//	//��ӡ��ַ
//	cout << "�ֲ�����a��ַΪ�� " << (int)&a << endl;
//	cout << "�ֲ�����b��ַΪ�� " << (int)&b << endl;
//
//	cout << "ȫ�ֱ���g_a��ַΪ�� " << (int)&g_a << endl;
//	cout << "ȫ�ֱ���g_b��ַΪ�� " << (int)&g_b << endl;
//
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "��̬����s_a��ַΪ�� " << (int)&s_a << endl;
//	cout << "��̬����s_b��ַΪ�� " << (int)&s_b << endl;
//
//	cout << "�ַ���������ַΪ�� " << (int)&"hello world" << endl;
//	cout << "�ַ���������ַΪ�� " << (int)&"hello world1" << endl;
//	cout << "ȫ�ֳ���c_g_a��ַΪ�� " << (int)&c_g_a << endl;
//	cout << "ȫ�ֳ���c_g_b��ַΪ�� " << (int)&c_g_b << endl;
//
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << "�ֲ�����c_l_a��ַΪ�� " << (int)&c_l_a << endl;
//	cout << "�ֲ�����c_l_b��ַΪ�� " << (int)&c_l_b << endl;
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

