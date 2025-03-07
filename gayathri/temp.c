#include <stdio.h>
int main()
{
 float f,c;
 printf("Enter temperature in farenheit:");
 scanf("%f",&f);
 c=(f-32)*5/9;printf("Temperature in celsius=%.2f\n",c);
 return 0;
}
