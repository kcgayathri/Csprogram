#include<stdio.h>
#include<ctype.h>
int main()
{
char str[10];
printf("enter a string in lower case:");
fgets(str,sizeof(str),stdin);
for (int i=0;str[i]!='\0';i++)
{
str[i]=topper(tr[i]);
}
printf("string in uppercase:%s\n",str);
return 0;
}
