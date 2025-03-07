#include<stdio.h>
int main()
{
float basic,bonus,commission,totalSales,totalSalary;
int itemsSold;
printf("enter the basic salary:");
scanf("%f",&basic);
printf("enter the bonus per item sold:");
scanf("%f",&bonus);
printf("enter the commission percentage:");
scanf("%f",&commission);
printf("enter the total items sold:");
scanf("%f",&totalSales);
basic=itemsSold+basic;
commission=(commission/100)*totalSales;
totalSalary=basic+bonus+commission;
printf("total salary :%.2f",totalSalary);
return 0;
}
