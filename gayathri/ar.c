#include<stdio.h>
int main()
{
int num,rem,temp,sum=0;
printf("enter an integer number:");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
 rem=temp%10;
 sum+=rem*rem*rem;
 temp/=10;
 }
 if (sum==num)
 printf("%d  is armstrong.",num);
 else
 printf("%d is not armstrong."num);
 return 0;
 }
