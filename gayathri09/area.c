#include<stdio.h>
void main()
{
int a,b,area,perimeter;
printf("Enter length and breadth:");
scanf("%d%d",&a,&b);
area=a*b;
perimeter=2*(a+b);
printf("Area of the rectangle :%d",area);
printf("Perimeter of the rectangle : %d",perimeter);
}
