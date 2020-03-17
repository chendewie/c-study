#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main()
{
	int arr[]={1,2,3,4};
	printf("%p\n",arr+1);
	printf("%p\n",&arr+1);
	printf("%p\n",&arr);
	return 0;
 } 
/* 
int print(int n)
{
	int i=0;
	for(i=1;i<=n;i++)
	{
		int j=0;
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%-3d ",i,j,i*j);
		 } 
		 printf("\n"); 
	}
 } 

int main(int argc, char *argv[]) 
{
	int line=0;
	scanf("%d",&line);
	print(line);
	return 0;
}*/
