#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */ 
int is_prime(int n)
{
	int i=0;
	for (i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}

	}
	
	return 1;
}

int main(int argc, char *argv[]) 
{

	int i= 0;
	for(i=2;i<=100;i++)
	{
		if(is_prime(i))
		{
			printf("%d",i);
		}
	}
	return 0;
}
