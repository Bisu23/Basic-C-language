//Program to find the bitwise OR of two numbers using switch statement:
#include<stdio.h>
int main()
{
int num1,num2,result;
printf("Enter ist number:");
scanf("%d",&num1);
printf("Enter 2nd number:");
scanf("%d",&num2);
switch(0)
{
 case 0:
result = num1 | num2;
printf("%d | %d = %d", num1, num2, result);
break;
}
return 0;
}
