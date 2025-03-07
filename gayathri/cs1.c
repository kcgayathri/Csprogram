#include<stdio.h>
#include<math.h>
int main()
{
 double x,y,z,w,result;
 printf("enter the value for x:");
 scanf("%d",&x);
  printf("enter the value for y:");
 scanf("%d",&y);
  printf("enter the value for z:");
 scanf("%d",&z);
  printf("enter the value for w:");
 scanf("%d",&w);
 result = (pow(x+y,2) * (x+z)/w);
 printf("the result is:%.2lf",result
 return 0;
 }
