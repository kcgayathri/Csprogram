#include<stdio.h>
int main()
{
		int n,arr[20],i,j,num,isprime;
		printf("Enter the no of elements:");
		scanf("%d",&n);
		printf("Enter %d elements:\n",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		printf("Prime numbers in the array are: ");
		for(i=0;i<n;i++)
		{
			num=arr[i];
			isprime=1;
			if(num<=1)
			{
				isprime=0;
			}
			else
			{
			for(j=2;j*j<=num;j++)
			{
				if(num%j==0)
				{
					isprime=0;
					break;
				}
			}
		} 
		if(isprime)
		{
			printf("%d\t",num);
		}
	}
	printf("\n");
	return 0;
}
