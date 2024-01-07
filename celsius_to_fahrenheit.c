//Program to convert a given temperature from Celsius to Fahrenheit or vice versa using switch statement:
#include<stdio.h>
int main()
{
float temp, converted_temp;
char choice;
printf("Enter temperature: ");
scanf("%f", &temp);
printf("Convert to (F)ahrenheit or (C)elsius: ");
scanf(" %c", &choice);
switch(choice)
{
case 'F':
case 'f':
converted_temp = (temp * 9/5) + 32;
printf("%.1fC is %.1fF", temp, converted_temp);
break;
case 'C':
case 'c':
converted_temp = (temp - 32) * 5/9;
printf("%.1fF is %.1fC", temp, converted_temp);
break;
default:
printf("Invalid choice.");
}
return 0;
}
