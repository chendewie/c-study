#include <stdio.h>
#include <assert.h>
#pragma warning(disable : 4996)

int main()
{

}
//int find_data(int arr[], int count)
//{
//	int data1 = 0;
//	int data2 = 0;
//	int i = 0;
//	int n = 0;
//	int flag = 1;
//	for (; i < count - 1; i++)
//	{
//		n = arr[i] ^ arr[i + 1];
//	}
//	while (!(n & flag))
//	{
//		flag <<= 1;
//	}
//	for (i = 0; i < count; i++)
//	{
//		if (0 == (arr[i] & flag))
//		{
//			data1 ^= arr[i];
//		}
//		else
//		{
//			data2 ^= arr[i];
//		}
//	}
//	printf("%d %d\n", data1, data2);
//}
//int main()
//{
//	int arr[] = { 1,1,2,2,3,3,4,4,55,66 };
//	int  count = sizeof(arr) / sizeof(arr[0]);
//	find_data(arr, count);
//}
//int data_total(int data)
//{
//	if (data < 10)
//	{
//		return data;
//	}
//	return data_total(data / 10) + data % 10;
//}
//int main()
//{
//	int data = 0;
//	scanf_s("%d", &data);
//	printf("%d\n", data_total(data));
//	return 0;
//}
//void left_turn(char* str, int n)
//{
//	assert(str);
//	int len = strlen(str);
//	n %= len;
//	while(n--)
//	{
//		int i = 0;
//		char tmp = str[0];
//		while (i < len - 1)
//		{
//			str[i] = str[i + 1];
//			i++;
//		}
//		str[i] = tmp;
//	}
//}
//int main()
//{
//	char str[] = "abcd1234";
//	int n = 0;
//	scanf("%d", &n);
//	left_turn(str, n);
//	printf("%s\n", str);
//	return 0;
//
//}

//int main()
//{
//	int a[10];
//	memset(a, 'A', sizeof(a));
//	return 0;
//}
//struct {
//	char name[40];
//	int age;
//}person,person_copy;
//
//int main()
//{
//	char myname[]= "Pierre de Fermat";
//	memcpy (person.name,myname, strlen(myname)+1);
//	person.age = 46;
//	memcpy (&person_copy, &person, sizeof(person));
//	printf("person_copy:%s %d \n", person_copy.name, person_copy.age);
//	return 0;
//}
//
//int main()
//{
//	char a[] = " tttt yyy,llll.";
//	char* p;
//	p = strtok(a," ,.");
//	while (p != NULL)
//	{
//		printf("%s\n", p);
//		p = strtok(NULL," ,.");
//	}
//	return 0;
//}

//int main()
//{

	/*char* a[] = { "aaa","ddd","fff","www"};
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("")
	return 0;*/
	/*int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int* ptr1 = (int*)(&aa + 1);
	int* ptr2 = (int*)(*(aa + 1));
	printf("%d%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;*/
//}
//int mystrcat(const char* a, char* b)
//{
//	assert(a);
//	assert(b);
//
//	char* q = a;
//	char* p = b;
//	while (*q)
//	{
//		q++;
//	}
//	while (*q = *p)
//	{
//		q++;
//		p++;
//	}
//	return a;
//}
//int main()
//{
//	const char a[20] = "12345";
//	char b[] = "abcde";
//	mystrcat(a, b);
//	printf("%s\n", a);
//
//}
// void my_strcpy(char *buf, const char *a)
//{
//	char *q = buf;
//	char *p = a;
//	while (*p!='\0')
//	{
//		*q = *p;
//		q++;
//		p++;
//	}
//	*q = '\0';
//	//return buf;
//}
//int main()
//{
//	const char *a = "abcdefg";
//	char buf[20];
//	my_strcpy(buf, a);
//	printf("%s\n", a);
//	printf("%s\n", buf);
//}
//int my_strlen(const char *a)
//{
//	assert(a);
//	const char *start = a;
//	const char* end = a;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	const char *a = "hello word";
//	int len = my_strlen(a);
//	printf("%d\n", len);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("%d%d\n", a, b);
//	while (1)
//	{
//		a ^= b;
//		b ^= a;
//		a ^= b;
//		break;
//	}
//	printf("%d%d\n", a, b);
//	return 0;
//}
//void mysort(int *a, int len)
//{
//	assert(a);
//	int i = 0;
//	for (; i < len-1; i++)
//	{
//		int j = 0;
//		int flag = 0;
//		for (;j<len-1-i ;j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				a[j] ^= a[j + 1];
//				a[j + 1] ^= a[j];
//				a[j] ^= a[j + 1];
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int a[] = { 1,22,3,55,4,6,7,88,97 };
//	int len = sizeof(a) / sizeof(a[0]);
//	mysort(a, len);
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int a[9] = { 1,2,3,4,5,6,7,8,9 };
//	int len = sizeof(a) / sizeof(a[0]);
//	int *q = a;
//	int* p = a + len;
//	while (p >= q)
//	{
//		int ret = 0;
//		ret = *p;
//		*p = *q;
//		*q = ret;
//		q++;
//		p--;
//	}
//	int i = 0;
//	for (i = 0; i < 9; i++) 
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//int avg(int nums, ...)
//{
//	va_list arg;
//	va_start(arg, nums);
//	int i = 0;
//	int sum = 0;
//	while (i<nums)
//	{
//		int data = va_arg(arg, int);
//		sum += data;
//		i++;
//	}
//
//	va_end(arg);
//	return sum / nums;
//}
//int main()
//{
//	printf("%d", avg(3, 2, 4, 6));
//}


//int jiecheng(int x)
//{
//	if (x <= 1)
//	{
//		return 1;
//	}
//	return x * jiecheng(x - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	printf("%d ", jiecheng(n));
//}
//void reverse(char* start, char* end)//不用定义，交换两个值
//{
//	while(start < end)
//	{
//		*start ^= *end;
//		*end ^= *start;
//		*start ^= *end;
//		start++;
//		end--;
//
//	}
//}
//void shift_string(char *arr)
//{
//	assert(arr);
//	char *p = arr;
//	char *q = p;
//	while (*q)
//	{
//		if (isspace(*q))
//		{
//			reverse(p, q - 1);
//			q++;
//			p = q;
//		}
//		else
//		{
//			q++;
//		}
//	}
//	reverse(p, q - 1);
//
//	reverse(arr, q - 1);
//
//
//}
//int main()
//{
//	char arr[] = "student a am i";
//	//int size = sizeof(arr) / sizeof(arr[0]);
//	shift_string(arr);
//	printf("%s\n", arr);
//}
//int find_only_one(int arr[],int len)
//{
//	assert(arr);
//	int x = arr[0];
//	int i = 1;
//	for (i=1; i < len; i++)
//	{
//		x ^= arr[i];
//	}
//	return x;
//}
//
//int main()
//{
//	int arr[] = { 1,1,2,2,3,3,44,5,5,6,6 };
//	int len = (sizeof(arr) / sizeof(arr[0]));
//	int res = find_only_one(arr, len);
//	printf("%d\n", res);
//	//return 0;
//}

//#define EXCHANGEBITS(x)\
//	( (((x) & 0x55555555)<<1) | (((x) & 0xAAAAAAAA)>>1) )
//int main()
//{
//	int x = 123;
//	printf("%u\n", EXCHANGEBITS(x));
//	return 0;
//}
//int main()
//{
//	char a = 128;
//	printf("%d\n", a);
//	return 0;
//	//char a = -1;
//	//signed char b = -1;
//	//unsigned char c = -1;
//	//printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
//int check_sys()
//{
//    int i = 0;
//    return (*(char*)&i);//
//}
//int main()
//{
//    int ret = check_sys();
//    if (ret == 1)
//    {
//        printf("xiaoduan\n");
//    }
//    else
//    {
//        printf("daduan\n");
//    }
//    return 0;
//    int a = 0;
//    int b = -10;
//    system("pause");
//    printf("%s\n%d\n",__DATE__,5);
//    return 0;
//}
