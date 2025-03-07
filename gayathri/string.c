 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
 char strl[100],str2[100];
 int choice;
 printf("choose an operation:\n");
 printf("1. Concatenate\n");
 printf("2.compare\n");
 printf("3.Length\n");
 printf("4.reverse string\n");
 scanf("%d",&choice);
 {
 case 1:
 printf("enter first string:");
 scanf("%s", str1);
 printf("enter secound string:");
  scanf("%s", str2);
  strcat(str1,str2);
   printf("concatenated string:%s\n",str1);
   break;
   case 2:
 printf("enter first string:");
 scanf("%s", str1);
 printf("enter secound string:");
  scanf("%s", str2);
 if(strcmp(str1,str2)==0)
 {
  printf("strings are equal.\n");
  }
  else
  {
   printf("strings are not equal.\n");
  }
  break;
   case 3:
 printf("enter a string:");
 scanf("%s", str1);
 printf("length of the string: %zu\n",
 strlen(str1));
 break;
    case 4:
 printf("enter first string:");
 scanf("%s", str1);
 strrev(str1);
 printf("reversed string: %s\n",str1);
 break;
 default:
 printf("invalid choice.\n");
 }
 return 0;
 }
