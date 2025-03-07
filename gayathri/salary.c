#include <stdio.h>
int main()
{
float basic,bonus,commission,totalSales,totalSalary;
int itemsSold;
printf ("Enter the Basic Salary:");
scanf("%f", &basic);
printf ("Enter the Bonus per item Sold:");
scanf("%f", &bonus);
printf ("Enter the Commission Percentage:");
scanf("%f", &commission);
printf ("Enter the Number of Items Sold :");
scanf("%d", &itemsSold);
printf ("Enter the Total Monthly Sales:");
scanf("%f", &totalSales);
bonus = itemsSold * bonus;
commission = (commission / 100) * totalSales;
totalSalary = basic+bonus+commission;
printf ("The Total Salary of the Salesman is: %.2f\n",totalSalary);
return 0;
}
