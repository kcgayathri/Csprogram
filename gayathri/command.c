 #include<stdio.h>
 #include<stdlib.h>
 int main(int argc ,char *argv[])
 {
 if (argc < 2)
 {
 printf("please provide at least one number.\n");
 return 1;
 }
 int largest = atoi(argv[1]);
 for (int i=2; i < agrc ;i++)
 {
 int num = atoi(argv[i]);
 if (num>largest)
 {
 largest=num;
 }
 }
 printf("the largest number is:%d\n",largest);
 return 0;
 }
