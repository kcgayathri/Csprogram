#include<stdio.h>
int main()
{
	float Basic,Bonus,Commission,totalSales,totalSalary;
	int itemSold;
	printf("Enter the basic salary:");
	scanf("%f",&Basic);
	printf("Enter bonus per item sold :");
	scanf("%f",&Bonus);
	printf("Enter the commission percentage :");
	scanf("%f",&Commission);
	printf("Enter the number f items sold:");
	scanf("%d",&itemSold);
	printf("Enter total Monthly sales :");
	scanf("%f",&totalSales);
	Bonus=itemSold*Bonus;
	Commission=(Commission/100)*totalSales;
	totalSalary=Basic+Bonus+Commission;
	printf("The total Salary of the salesman is : %.2f\n",totalSalary);
	return 0;
}
