//Program to check : a given number is even or odd using switch statement:
#include<stdio.h>
int main()
{
 int num;
 printf("Enter a number:");
 scanf("%d",&num);
 switch(num%2)
 {
 case 0:
 printf("The number %d is even.",num);
 break;
 case 1:
 printf("The number %d is not odd.",num);
 break;
 }
 return 0;
}
