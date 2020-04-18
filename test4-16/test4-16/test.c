#include<stdio.h>
#include<string.h>
#include<assert.h>


typedef enum Color//ÑÕÉ« 
{
	RED = 1,
	GREEN = 2,
	BLUE = 4
}Color;
int main()
{
	Color cl;
	cl = RED;
	cl = 122;
	printf("%d ", cl);
	printf("%d", sizeof(cl));
	return 0;

}
//typedef struct test
//{
//	int a;
//	char b;
//	double c;
//} test;
//
//int main()
//{
//	test q;
//	q.a = 1;
//	q.b = 'a';
//	q.c = 1.2222;
//	return 0;
//}

// enum Color clr = 5;
////clr = 5;
//
//int main()
//{
//	//int clr = RED;
//	printf("%d ", RED);
//	printf("%d", clr);
//	return 0;
//}
//#pragma pack (2)
//typedef struct Test//8
//{
//	int a : 2;
//	int c : 5;
//	int k : 10;
//	int s : 30;
//}Test;
//
//int main()
//{
//	printf("%d", sizeof(Test));
//}
//char* mystrstr(const char* st1,const char* st2)
//{
//	assert(st1);
//	assert(st2);
//
//	char* cp = (char*)st1;
//	char* substr = (char*)st2;
//	char* s1 = NULL;
//
//	if(* st1 == '\0')
//		return 0;
//
//	while (*cp)
//	{
//		s1 = cp;
//		substr = st2;
//		while (*s1 && *substr && (*s1 == *substr))
//		{
//			s1++;
//			substr++;
//		}
//		if (*substr == '\0')
//			return cp;
//
//		cp++;
//	}
//
//}
//int main()
//{
//	char a[] = "abcdefghij";
//	char b[] = "efg";
//	printf("%s\n", mystrstr(a, b));
//	return 0;
//}