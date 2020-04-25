#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disaable : 4996)
#include<stdio.h>
#define offsetof(StructType, MemberName) (size_t)&(((StructType *)0)->MemberName)
//#define offsetof(StructType, MemberName) &(((StructType *)0)->MemberName)
typedef struct Test
{
	int a;
	char b;
	short c;
}Test;
int main()
{
	Test p;
	//printf("%p\n", offsetof(Test,b));
	printf("%d\n", offsetof(Test, b));

	return 0;
}
//int cnt = 0;
//int fib(int n)
//
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//void main()
//
//{
//	fib(8);
//	printf("%d", cnt);
//
//}
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//
//mychange(char* p,int start,int end)
//{
//	char tmp;
//	while (start<end)
//	{
//		tmp = p[start];
//		p[start] = p[end];
//		p[end] = tmp;
//		start++;
//		end--;
//	}
//}
//void myreverse(char* p)
//{
//	assert(p);
//	int len = strlen(p);
//	int start = 0;
//	int end = len - 1;
//	mychange(p,start,end);
//	end = 0;

//	for (int i=0;i<len;)
//	{
//		if (p[i] != ' ')
//		{
//			start = i;
//			while (p[i]!=' ' && p[i]!='\0')
//			{
//				i++;
//			}
//			i = i - 1;
//			end = i;
//			mychange(p,start,end);
//		}
//		i++;
//	}
//}
//int main()
//{
//	char ar[100] = {0};
//	gets(ar);
//	myreverse(ar);
//	printf("%s\n", ar);
//	return 0;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    if (a < b)
//    {
//        int tmp = a;
//        a = b;
//        b = tmp;
//    }
//
//    for (int i = a; i > 0; i++)
//    {
//        if ((i % a == 0) && (i % b == 0))
//        {
//            printf("%d\n", i);
//            break;
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int i = 123;
//	int j = 0;
//	while (i!=0)
//	{
//		i = i / 10;
//		++j;
//	}
//	printf("%d", j);
//}
//#define EXCHANGE(n)  ((((n)&0x55555555)<<1)|(((n)&0xaaaaaaaa)>>1))
//
//int main()
//{
//	
//	printf("%d\n", EXCHANGE(5));
//
//}
//int main() 
//{ 
//	FILE* fp;
//	fp = fopen("example.txt", "w");
//	if (NULL == fp)
//	{
//		printf("open error\n");
//		return;
//	}
//
//	int ar[10] = {0};
//	for (int i = 0; i < 10; i++)
//	{
//		fprintf(fp, "%d ", &ar[i]);
//	}
//	//int arr[20];
//	//for (int i=0;i<10;i++)
//	//{
//	//	fprintf(fp,"%d",i);
//	//}
//
//	fclose(fp); 
//
//	return 0; 
//}