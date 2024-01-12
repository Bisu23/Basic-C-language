// palindrome check
//A palindromic number is a number (such as 12421) that remains the same when its digits are reversed.
#include<stdio.h>
int main()
{
 int number ,reversednumber=0,remainder,originalnumber;
 printf("Enter the positive number:");
 scanf("%d",&number);
 originalnumber = number;
 // reversed the number
 while(number!=0)
 {
  remainder = number % 10;
  reversednumber = reversednumber*10 + remainder;
  number/=10;
 }
 // palindrome check
 if(originalnumber==reversednumber)
 {
  printf("The number %d is palindrome.",originalnumber);
 }
 else
 {
  printf("The number %d is not palindrome.",originalnumber);
 }
 return 0;
}
