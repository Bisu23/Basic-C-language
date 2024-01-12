// armstrong number checker:
//It is a number that equals the sum of its digits, each raised to a power. 
//For example, if you have a number like 153, 
//it's an Armstrong number because 1^3 + 5^3 + 3^3 equals 153.
#include<stdio.h>
#include<math.h>
int main()
{
 int number,digits=0,originalnumber,result=0,remainder;
 printf("Enter a positive number:");
 scanf("%d",&number);
 // find number of digits
 originalnumber = number;
 while(number!=0)
 {
  number/=10;
  digits++;
 }
 printf("The number of digits of the given number %d is %d.",originalnumber,digits);
 number = originalnumber;
 while(number!=0)
 {
  remainder = number%10;
  result += pow(remainder,digits);
  number/=10;
 }
 if(result==originalnumber)
 {
  printf("%d is an Armstrong number.",originalnumber);
 }
 else
 {
  printf("%d is not an Armstrong number.",originalnumber);
 }
 return 0;   
}
