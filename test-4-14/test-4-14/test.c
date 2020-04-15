#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 4996)
#include<stdio.h>

int main()
{ 
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;    
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}
//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));//int(*)aa[]
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;
//	p = a[0];
//	printf( "%d", p[0]);
//	return 0; 
//}

//int main() 
//{ 
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}
//struct Test //20字节
//{ 
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p=(struct Test*)0x100000; 
////假设p 的值为0x100000。 如下表表达式的值分别为多少？ 
//int main() 
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0; 
//}


//int main() 
//{ 
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0; 
//}
//void* mymemmove(void* dst,void* src,size_t count)
//{
//	void* ret = dst;
//	if (dst<=src||(char*)dst>=((char*)src+count))
//	{
//		while (count--)
//		{
//			*(char*)dst = *(char*)src;                         
//			dst = (char*)dst + 1;                         
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		dst = (char*)dst + count - 1;
//		src = (char*)src + count - 1;
//		while (count--)
//		{
//			*(char*)dst = *(char*)src;
//			dst = (char*)dst - 1;
//			src = (char*)src - 1;
//		}
//	}
//	return (ret);
//}
//int main()
//{
//	char arr[] = "abcdefghij";
//	mymemmove(arr + 2, arr, sizeof(arr[0] * 4));
//	puts(arr);
//	return 0;
//}
//void* mymemcpy(void* dst,void* src,size_t count)
//{
//	void* ret = dst;
//	assert(dst);
//	assert(src);
//	while (count--)
//	{
//		*(char*)dst = *(char*)src;
//		dst = (char*)dst + 1;
//		src = (char*)src + 1;
//	}
//}
//int main()
//{
//	char ar1[] = "abcdefg";
//	char ar2[] = "ABC";
//	mymemcpy(ar1, ar2, strlen(ar2));
//	puts(ar1);
//	return 0;
//}
//int myfindstring(char* str, char* subStr)
//{
//    assert(str);               //判断指针是否合法 
//    assert(subStr);
//    int len = strlen(str);     //测字符串长度 
//
//    if (len == strlen(subStr)) {
//        char* _str = (char*)malloc(2 * len + 1);      
//        strcpy(_str, str);                        
//        strcat(_str, str);                        
//        if (strstr(_str, subStr) != NULL) {
//            return 1;
//        }
//        free(_str);                                 //释放申请的堆空间
//    }
//    return 0;
//}
//int main()
//{
//    char msg[] = "AABCD";
//    char subStr[] = "BCDAA";
//    printf("%d\n", myfindstring(msg, subStr));
//    return 0;
//}
//int mysearch(int arr[][3],int* rol,int* col,int key)
//{
//	int i = 0;
//	int j = *col - 1;
//	while ((j>=0)&&(i<=*rol-1))
//	{
//		if (arr[i][j] == key)
//		{
//			*rol = i;
//			*col = j;
//			return 0;
//		}
//		else if (arr[i][j] < key)
//			i++;
//		else
//			j--;
//	}
//	return -1;
//}
//int main()
//{
//	int rol = 3;
//	int col = 3;
//	int key = 0;
//	int arr[][3] = { 1,2,3,4,5,6,7,8,9 };
//	scanf("%d", &key);
//	int ret = mysearch(arr,&rol,&col,key);
//	if (ret == -1)
//		printf("meizhaodao");
//	else
//		printf("xiabiao:%d %d", rol, col);
//	return 0;
//}
//void changestr(char* p,char* q)
//{
//	while (*q != '\0')
//	{
//		*p = *p ^ *q;
//		*q = *p ^ *q;
//		*p = *p ^ *q;
//		q++;
//		p++;
//	}
//}
//int main()
//{
//	char arr[100];
//	int k = 0;
//	printf("shuru:");
//	gets(arr);
//	printf("zuoxuancishu:");
//	scanf("%d", &k);
//	for (int i = 0; i < k; i++)
//	{
//		changestr(arr, arr + 1);
//	}
//	puts(arr);
//	return 0;
//}