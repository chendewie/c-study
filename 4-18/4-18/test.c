#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 4996)
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 1, 2, 3, 4, 5, 6 };
	int i = 0;
	int ret = 0;
	int pos = 0;
	int num1 = 0;
	int num2 = 0;
	//1.把所有数字异或 
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		ret ^= arr[i];
	}
	//2.找ret二进制中为1的数
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	//分组
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			num1 ^= arr[i];
		}
	}
	num2 = num1 ^ ret;
	printf("num1=%d,num2=%d\n", num1, num2);
	return 0;
}
//char* My_strncpy(char* dest, const char* src, size_t n)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	while (n--)
//	{
//		*dest++ = *src++;
//	}
//	return ret;
//}
//int main()
//{
//	char ar1[] = "123456789";
//	char ar2[] = "abcdefghi";
//	//char* p = strncpy(ar1, ar2, 8);
//	char* p = My_strncpy(ar1,ar2,8);
//	printf("%s\n", p);
//}
//char* MyStrncat(char* dest, const char* src, int num)
//{
//    assert(src!=NULL);
//    assert(dest!=NULL);
//    int i = 0;
//    char* tmp = dest;
//    while (*dest)
//    {
//        dest++;
//    }
//    while (i < num)
//    {
//        *(dest + i) = *(src + i);
//        i++;
//    }
//    *(dest + i + 1) = '\0';
//    return tmp;
//}
//
//
//int main()
//{
//    char* source = "abcdefg";
//    char destination[64] = { "1234567" };
//    int number = 0;
//    printf("Input a number\n");
//    scanf("%d", &number);
//    printf("Destination bcome:");
//    printf("%s\n", MyStrncat(destination, source, number));
//    return 0;
//}
//int Myatoi(char* str)
//{
//    long number = 0;
//    int flag = 1;  //判断符号位  
//    if (NULL == str)
//    {
//        printf("str is NULL");
//        return 0;
//    }
//    while (*str == ' ')  //空格  
//    {
//        str++;
//    }
//    if (*str == '-')    //符号位  
//    {
//        flag = -1;
//        str++;     
//    }
//    while ((*str >= '0') && (*str <= '9'))//转化  
//    {
//        number = number * 10 + *str - '0';
//        str++;
//    }
//    return flag * number;
//}
//
//int main()
//{
//    char* str = "-123456";
//    int tmp = Myatoi(str);
//    //printf("%d\n", atoi(str));
//    printf("%d\n",tmp);
//}