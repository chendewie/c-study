#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 4996)

//#include<stdio.h>
////递归
//int my_fib(int n)
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    if (n <= 2)
//    {
//        return 1;
//    }
//    else
//    {
//        return my_fib(n - 1) + my_fib(n - 2);
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", my_fib(n));
//    return 0;
//}


//1 1 2 3 5 8 13...
////非递归
//int my_fib(int n)
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    if (n <= 2)
//    {
//        return 1;
//    }
//    else
//    {
//        for (int i = 0; i < n - 2; i++)//5-2=3
//        {
//            c = a + b;//2 3 5 
//            a = b;//1 2 3 
//            b = c;//2 3 5 
//        }
//        return c;
//    }
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//    printf("%d\n", my_fib(n));
//	return 0;
//}

//int my_power(int i,int k)
//{
//	int n = 0;
//	while (k >0)
//	{
//		return i * my_power(i,k-1);
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	scanf("%d%d", &i,&k);
//	printf("%d\n", my_power(i, k));
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	else 
//	{
//		int i = n % 10;
//		return (i + DigitSum(n / 10));
//	}
//}
//int main()
//{
//	int i = 0;
//	printf("输入一个非负整数:");
//	scanf("%d", &i);
//	printf("%d", DigitSum(i));
//	return 0;
//}

//void reverse_string(char* string)
//{
//	if (*string == '\0')
//	{
//       return;
//	}
//	reverse_string(string + 1);
//	printf("%c", *string);
//}
//int main()
//{
//	
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	return 0;
//}

////递归
//int me_strlen(char* arr)
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + me_strlen(arr + 1);
//	}
//}
//int main()
//{
//	char arr[] = "hello-bit";
//	printf("%d\n", me_strlen(arr));
//	return 0;
//}
//
////非递归
//int my_strlen(char* arr)
//{
//	int i = 0;
//	while (*arr != '\0')
//	{
//		i++;
//		arr++;
//	}
//	return i;
//}
//int main()
//{
//	char arr[] = "hello-bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//递归
//int my_factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * my_factorial(n - 1);
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	double ret = 1.0;
//	scanf("%d", &n);
//	my_factorial(n);
//	printf("%d!=%d\n", n,my_factorial(n) );
//	return 0;
//}
//非递归
//int main()
//{
//	int i = 0;
//	int n = 0;
//	double ret = 1.0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		if (n != 0)
//		{
//			ret = ret * i;
//		}
//	}
//	printf("%d!=%lf \n",n,ret);
//	return 0;
//}


//void my_print(int i)
//{
//	if (i > 9)
//	{
//		my_print(i / 10);
//	}
//	printf("%d ", i % 10);
//}
//int main()
//{
//	int q = 0;
//	scanf("%d", &q);
//	my_print(q);
//	return 0;
//}