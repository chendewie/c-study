#include<stdio.h>
#include<math.h>


//int main()
//{
//    int i = 100;
//    int count = 0;
//    while (i <= 200)
//    {
//
//        int j = 2;
//        //i=a*b,a����b��Ȼ��һ����<=��ƽ��i��
//        while (j <= sqrt(i))
//        {
//            if (i % j == 0)
//            {
//                break;
//            }
//            j++;
//        }
//        if (j > sqrt(i))
//        {
//            printf("%d ", i);
//            count++;
//        }
//        i++;
//    }
//    printf("\ncount = %d\n", count);
//    return 0;
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i<10 || i == 9)
//		{
//			printf("%d", i);
//			count++;
//		}
//		if ()
//		{
//
//		}
//	}
//	return 0;
//}

//int main() 
//{
//	int k = 0;
//	int times = 0;
//	for (int i = 1; i < 101; i++) 
//	{
//		k = i;
//		while (k != 0) 
//		{
//			if (k % 10 == 9) 
//			{//�ж�k�ĸ�λ���Ƿ���9��
//				times++;
//			}
//			k = k / 10;//�ж�k��ʮλ�Ƿ���9�����У������½���whileѭ��
//		}
//	}
//	printf("����%d������9\n", times);
//}
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (1.0 / i) * (-pow(-1, i));
//	}
//	printf("%f", sum);
//	return 0;
//}
//int main()
//{
//	int a[] = { 1,23,4,5,66,7,8,4,10000,10 };
//	int max = a[0];
//	int tmp = 0;
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (max < a[i])
//		{
//			tmp = max;
//			max = a[i];
//			a[i] = tmp;
//		}
//	}
//	printf("max=%d", max);
//	return 0;
//}

int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d=%d\t", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}