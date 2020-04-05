//#include<iostream>
//using namespace std;
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 4996)


#include<stdio.h>
#include<stdlib.h>
void swap(int* arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;
	while (left < right)
	{
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right) 
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int printarr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
int main()
{
	int arr[] = { 2,4,6,8,1,3,5,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	swap(arr, sz);
	printarr(arr, sz);
	return 0;
}

//#include<assert.h>
//#include<string.h>
//char* mystrcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest);
//	assert(src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char a[20] = "$$$$$$$$$$";
//	char b[] = "12456";
//	printf("%s\n", strcpy(a, b));
//	return 0;
//}
//int mystrlen(const char* p)
//{
//	int count = 0;
//	assert(p != NULL);
//	while ('\0'!=*p)
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdefghij";
//	int len = mystrlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}
//函数返回用空瓶换来的汽水个数
//int Bottle(int x)
//{
//    int ret = x / 2;//空瓶兑换的汽水个数
//    int empty = x / 2 + x % 2;//兑换的汽水和剩下的空瓶个数之和
//    if (empty > 1)
//        return ret + Bottle(empty);
//    else
//        return ret;
//}
//int main()
//{
//    int p = 0;
//    int n = 0;
//    printf("请输入金额：");
//    scanf("%d", &p);
//    n = p / 1;
//    int bottle = n + Bottle(n);//最终喝到的汽水个数
//    printf("%d瓶\n", bottle);
//    return 0;
//}



//typedef struct Q {
//	int a;
//	char b;
//}haha;
//int main()
//{
//	haha i = { 10,'A' };
//	haha * p = &i;
//	printf("%d %c\n", i.a, i.b);
//	printf("%d %c\n", p->a, p->b);
//	return 0;
//}

//void myswap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int a = 11;
//	int b = 22;
//	cout << a << ";" << b << endl;
//	myswap(a, b);
//	cout << a << ";" << b << endl;
//	return 0;
//}
//int main() 
//{
//
//	int a = 10;
//	int& b = a;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	b = 100;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	system("pause");
//
//	return 0;
//}
//int main()
//{
//	int* arr = new int[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	delete[] arr;//jia[]
//	return 0;
//}
//int* func()
//{
//	int* a = new int(10);
//	return a;
//}
//int main()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	delete p;
//	//cout << *p << endl;
//	return 0;
//};