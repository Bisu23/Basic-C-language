//Program to check if a given year is a leap year or not using switch statement:
#include<stdio.h>
void main()
{
int year;
printf("Enter a year: ");
scanf("%d", &year);
switch(year % 4) 
{
 case 0:
 switch(year % 100) 
 {
  case 0:
  switch(year % 400) 
  {
   case 0:
   printf("%d is a leap year.", year);
   break;
   default:
   printf("%d is not a leap year.", year);
   break;
   }
  break;
  default:
  printf("%d is a leap year.", year);
  break;
  }
 break;
 default:
 printf("%d is not a leap year.", year);
 break;
 }
}
