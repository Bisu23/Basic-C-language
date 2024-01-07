//Program to perform basic arithmetic operations using switch statement:
#include<stdio.h>
int main()
{
int num1 , num2 ,result;
char operator;
printf("Enter ist number:");
scanf("%d",&num1);
printf("Enter 2nd number:");
scanf("%d",&num2);
printf("Enter operator (+,-,*,/):");
scanf(" %c", &operator);
switch(operator)
{
 case'+':
 printf("The result is %d :",num1+num2);
 break;
 case'-':
 printf("The result is %d:",num1-num2);
 break;
 case'*':
 printf("The result is %d:",num1*num2);
 break;
 case '/':
 printf("The result is %d:",num1/num2);
 break;
 default:
 printf("Invalid operator");
}
return 0;
}
