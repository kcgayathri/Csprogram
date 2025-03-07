#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
int choice;
printf("Choose an operation:\n");
printf("1.concatenate\n");
printf("2.Compare\n");
printf("3.Length\n");
printf("4.Reverse string\n");
scanf("%d",&choice);
 getchar();
switch(choice)
{
case 1:
	printf("Enter the first string:");
	fgets(str1,sizeof(str1),stdin);
	printf("Enter the second string:");
	fgets(str2,sizeof(str2),stdin);
	strcat(str1,str2);
	printf("Concatenated string :%s\n",str1);
	break;
case 2:
printf("Enter first string: ");
fgets(str1,sizeof(str1),stdin);
printf("Enter second string");
fgets(str2,sizeof(str2),stdin);
if(strcmp(str1,str2)==0)
{
printf("Strings are equal.\n");
}
else
{
printf("Strings are not equal.\n");
}
break;
case 3:
printf("Enter a string: ");
fgets(str1,sizeof(str1),stdin);
printf("Length of the string: %zu\n",strlen(str1));
break;
case 4:
printf("Enter a string:");
fgets(str1,sizeof(str1),stdin);
 reverseString(str1);
printf("Reversed string: %s\n",str1);
break;
default:
printf("Invalid choice.\n");
}
return 0;
}
