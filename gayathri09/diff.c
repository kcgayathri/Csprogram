#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("Enter the number of rows and coloumns:");
	scanf("%d%d",&m,&n);
	int matrix1[m][n],matrix2[m][n],difference[m][n];
	printf("Enter elements of matrix1:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("Enter elements of matrix2 :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&matrix2[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			difference[i][j]=matrix1[i][j]-matrix2[i][j];
		}
	}
	printf("difference of the matrix : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",difference[i][j]);
		}
		printf("\n");
	}
	return 0;
}
