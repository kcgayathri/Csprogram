 #include<stdio.h>
 #include<stdlib.h>
 int main(intargc,char *argv[])
 {
 if (argv<2)
 {
 printf("please provide at least one number.\n");
 return 1;
 }
 int largest = atoi(argv[1]);
 if (num>largest)
 {
 largest=num;
 }}
 printf('the largest number is:%d\n',largest);
 return 0;
 }
