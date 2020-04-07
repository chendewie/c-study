#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 10;
	return 0;
}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ( ((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1) )
//						{
//							if ((a * b * c * d * e == 120) && (a + b + c + d + e == 15))
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int killer;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3))
//		{
//			printf("killer is %c\n",killer);
//		}
//	}
//	return 0;
//}
//#define N 9
//void setarr(int arr[N][N])
//{
//	int row = 0;
//	int col = 0;
//	for (row = 0; row < N; row++)
//	{
//		for (col = 0; col <= row; col++)
//		{
//			arr[row][0] = 1;
//			if (row >= 1 && col >= 1)
//			{
//				arr[row][col] = arr[row - 1][col - 1] + arr[row - 1][col];
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[N][N] = { 0 };
//	setarr(arr);
//	for (int row = 0; row < N; row++)
//	{
//		for (int col = 0; col <= row; col++)
//		{
//			printf("%-2d ", arr[row][col]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//int main()
//{
//    char a[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//    return 0;
//}
//int main()
//{
//    unsigned char a = 200;
//    unsigned char b = 100;
//    unsigned char c = 0;
//    c = a + b;
//    printf("%d\n%d", a + b, c);
//    return 0;
//}