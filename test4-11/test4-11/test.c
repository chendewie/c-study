#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
#include <assert.h>

int mystrlen(const char* str)
{
	int n = 0;
	while (*str != '\0')
	{
		n++;
		str++;
	}
	return n;
}
int main()
{
	char arr[] = "abcdeg";
	printf("%d\n", mystrlen(arr));
	return 0;
}
/*
char* mystrcpy(char* dest,const char* src)
{
	char* p = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while ((*dest++ = *src++))
	{
		;
	}
	return p;
}
int main()
{
	char a[] = "aaaaaaaa";
	char b[] = "bbbb";
	mystrcpy(a, b);
	printf("%s\n", a);
}
/*
int mystrcmp(const char* src,const char* dst)
{
	int ret = 0;
	assert(dst != NULL);
	assert(src != NULL);
	while (*src == *dst)
	{
		if (*src == '\0')
		{
			return 0;
		}
		src++;
		dst++;
	}
	if ((*src - *dst) < 0)
		ret = -1;
	else
		ret = 1;
	return ret;
}
int main()
{
	char a[20] = "abcD";
	char b[20] = "abcd";
	int ret = mystrcmp(a, b);
	//int ret2 = strcmp(a, b);
	printf("%d\n", ret);
	//printf("%d\n", ret2);
	return 0;
}
/*
char* mystrcat(char* dest,const char* src)
{
	char* p = dest;
	assert(dest!=NULL);
	assert(src!= NULL);
	while (*dest)
	{
		dest++;
	}
	while ((*dest++ = *src++))
	{
		;
	}
	return p;
}
int main()
{
	char a[20] = "i love ";
	char b[20] = "study";
	printf("%s\n", mystrcat(a, b));
	return 0;
}
/*
int main() 
{ 
	char str[] = ",,,This,,,a   sample string..."; 
	char* pch;
	printf("Splitting string \"%s\" into tokens:\n", str); 
	pch = strtok(str, " ,.-");
	while (pch != NULL) 
	{ 
		printf("%s\n", pch);
		pch = strtok(NULL, " ,.-"); 
	}
	return 0; 
}

/*
int int_cmp(const void* p1, const void* p2)
{
	return (*(double*)p1 > *(double*)p2);
}

int main()
{
	double arr[] = {1.11,1.23,1.32,1.01,1.02};
	int i = 0;
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(double), int_cmp);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%lf ", arr[i]);
	}
	printf("\n");
	return 0;
}
/*
int int_cmp(const void* p1, const void* p2) 
{ 
	return (*(char*)p1 - *(char*)p2); 
}

int main()
{
	char arr[] = {'q','w','e','r','t','y'};
	int i = 0;
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(char), int_cmp);
	for(i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%c ", arr[i]);
	}
	printf("\n");
	return 0;
}
/*
int myint_cmp(const void* p1, const void* p2)
{
	return (*(int *)p1 - *(int *)p2);
}

void my_swap(void* p1,void* p2,int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}

void bubble(void* base,int count,int size,int(*cmp)(void*,void*))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				my_swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}
int main()
{
	int arr[] = { 11,33,55,77,88,66,44,22 };
	int i = 0;
	int size = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, size, sizeof(int), myint_cmp);
	for (i = 0; i < size; i++) 
	{ 
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
/*
int main()
{
	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
	int* ptr1 = (int*)(&aa + 1);
	int* ptr2 = (int*)(*(aa + 1));
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}
*/
//int main()
//{
//	//int a[] = { 1,2,3,4 }; 
//	//printf("%d\n", sizeof(a)); //16
//	//printf("%d\n", sizeof(a + 0)); //4
//	//printf("%d\n", sizeof(*a)); //4
//	//printf("%d\n", sizeof(a + 1)); //4
//	//printf("%d\n", sizeof(a[1])); //4
//	//printf("%d\n", sizeof(&a)); //4
//	//printf("%d\n", sizeof(*&a)); //4£¡
//	//printf("%d\n", sizeof(&a + 1));//4 
//	//printf("%d\n", sizeof(&a[0])); //4
//	//printf("%d\n", sizeof(&a[0] + 1));//4
//
//	//×Ö·ûÊý×é 
//	char arr[] = {'a','b','c','d','e','f'};
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr+0)); //1
//	printf("%d\n", sizeof(*arr)); //6
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr)); //4
//	printf("%d\n", sizeof(&arr + 1));//4
//	printf("%d\n", sizeof(&arr[0] + 1));//4
//	printf("%d\n", strlen(arr)); //6
//	printf("%d\n", strlen(arr + 0));//6 
//	printf("%d\n", strlen(*arr)); //6
//	printf("%d\n", strlen(arr[1]));//1
//	printf("%d\n", strlen(&arr)); //
//	printf("%d\n", strlen(&arr + 1)); 
//	printf("%d\n", strlen(&arr[0] + 1));
//
//	return 0;
//}
