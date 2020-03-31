#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 4996)

#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	scanf("%d%d", &i, &j);
	printf("交换前：i=%d j=%d\n", i, j);
	i = i ^ j;
	j = i ^ j;
	i = i ^ j;
	printf("交换后：i=%d j=%d\n", i, j);
	return 0;
}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	scanf("%d", &k);
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((k >> i) & 1)==1)
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//int main()
//{
//	int k = 0;
//	int i = 0;
//	scanf("%d", &k);
//	printf("奇数位:");
//	for (i = 0; i < 32; i++)
//	{
//		if (i % 2 == 0)
//		{
//			printf("%d ", (k >> i) & 1);
//		}
//	}
//	printf("\n");
//	printf("偶数位:");
//	for (i = 0; i < 32; i++)
//	{
//		if (i % 2 != 0)
//		{
//			printf("%d ", (k >> i) & 1);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d%d", &m, &n);
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    printf("%d", sizeof(i));
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}