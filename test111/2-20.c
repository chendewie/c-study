#include <stdio.h>
int sum(int a)
{
    int c = 0;
    static int b = 3;
    c += 1;
    b += 2;
    return (a + b + c);
}
int main()
{
    int i;
    int a = 2;
    for (i = 0; i < 5; i++) 
    { 
        printf("%d,", sum(a)); 
    } 
} 
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int main()
{
	char a[]="qwert";
	printf("%d",strlen(a));
	//printf("%d",strlen(a+0));
	//printf("%d",strlen(&a));
	return 0;
 } 
/*void mysort(int* a, int len)
{
	assert(a);
	int i = 0;
	for (; i < len; i++)
	{
		int j = 0;
		int flag = 0;
		for (;j<len-1-i ;)
		{
			if (a[j] > a[j + 1])
			{
				a[j] ^= a[j + 1];
				a[j + 1] ^= a[j];
				a[j] ^= a[j + 1];
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
int main()
{
	int i = 0;
	int a[] = { 1,22,3,55,4,6,7,88,97 };
	int len = sizeof(a) / sizeof(a[0]);
	mysort(a, len);
	for (i = 0; i < len; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}
/*int chang(const char *len)
{
	int count =0;
	
	while(*len != '\0')
	{
		len++;
		count++;
	}
	return count;
	
}

int main(int argc, char *argv[]) 
{
	int len = chang("abcdef");
	printf("%d\n",len);
		
	return 0;
}*/ 
