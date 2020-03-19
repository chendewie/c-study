#include <stdio.h>
#include <stdlib.h>
#include <math.h> 


int main() 
{
	int i=0;
	int count =0;
	for (i=100;i<=200;i++)
	{ 
		int j=0;
		for(j=2;j<i;j++)
		{
			if (i%j==0)
			{
				break;
			}
		}
		if(i==j)
		{
			printf("%d ",i);
			count++;
		}
	}
	printf("\ncount=%d\n",count);
	
}


/*int main ()
{
	int n=0;
	int i=0;
	int sum=1;
	scanf("%d",&n);
	//i=n;
	//while(n!=0)
//	{
		for (i=1; i<=n; i++)
		{
			sum=sum*i;
			//i=i+i;
		}
		
//	}
	printf("%d\n",sum);
	return 0;
}	 */
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[])
{
	
	int i=0;
	for (i=0;i<100000;i++)
	{
		int count=1;
		int tmp =i;
		int sum=0;
		
		while(tmp> 9)
		{
			count++;
			tmp= tmp/10;
			 
		}
		
		tmp=i;
		while(tmp)
		{
			sum = sum + pow( tmp%10, count);
			tmp = tmp/10;
		}
		if (i == sum)
		
		{
			printf(" %d",i);
		}
	}
	return 0;
}*/ 
