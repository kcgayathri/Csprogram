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
}

}

