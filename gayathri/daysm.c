#include<stdio.h>
int main()
{
int totDays,mon,remDays;
printf("enter the total number of days:");
scanf("%d",&totDays);
mon=totDays/30;
remDays=totDays%30;
printf("%d days=%d days + %d months",totDays,mon,remDays);
return 0;
}
