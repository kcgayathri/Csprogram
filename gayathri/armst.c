#include<stdio.h>
int main()
{
int num,temp,rem,sum=0;
printf("enter a 3 digit intiger number:");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
rem=temp%10;
sum+=rem*rem*rem;
temp/=10;
}
if(sum==num)
printf("%d is an armstrong number.",num);
else
printf("%d is not an armstrong nnumber.",num);
return 0;
}
