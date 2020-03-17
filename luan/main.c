#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i=0;
	int n=0;
	
	int j=0;
	int sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    int ret=1;
		for(j=1;j<=i;j++)
		{
			ret=ret*j;
		}
		sum=sum+ret;
	} 
	printf("%d",sum);
	return 0;
}
