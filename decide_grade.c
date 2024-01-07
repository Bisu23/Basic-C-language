//Program to calculate the grade of a student based on their percentage using switch statement:
#include<stdio.h>
int main()
{
 float percentage;
 printf("Enter percentage of student:");
 scanf("%f",&percentage);
 if (0> percentage || percentage >100)
 {
  printf("Invalid input percentage");
  return 1;
 }
 int grade = (int)(percentage / 10);
 switch(grade)
 {
 case 10:
 case 9:
 printf("Grade: A+");
 break;
 case 8:
 printf("Grade: A");
 break;
 case 7:
 printf("Grade: B+");
 break;
 case 6:
 case 5:
 printf("Grade: C");
 break;
 case 4:
 printf("Grade: D");
 break;
 default:
 printf("Sorry,the sudent has disqualified");
 }
 return 0;
}
