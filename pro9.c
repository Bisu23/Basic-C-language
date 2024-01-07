/*Session A- Temperature is increase by 0.2 C, relative humidity is 20%, Death-4 million, Electricity
Demand-5% and Co2 emission is 400-500 ppm
Session B- Temperature is increase by 0.4 C, relative humidity is 30%, Death-5-6 million, Electricity
Demand-7% and Co2 emission is 500-600 ppm
Session C- Temperature is increase by 0.8 C, relative humidity is 30-40%, Death-6-8 million, Electricity
Demand-15% and Co2 emission is 500-1000 ppm
Session D- Temperature is increase by 1.2 C, relative humidity is above 40%, Death-8 and above
million, Electricity Demand-10% and Co2 emission is 800-1200 ppm
Consider Baseline Temperture - 30 C*/

#include<stdio.h>
int main()
{
 float tem = 30;
 char session;
 printf("Enter the Session(A,B,C,D)");
 scanf("%c",&session);
 switch(session)
 {
 case 'A':
 printf("The temperature :%f C\n",tem+0.2);
 printf("The relative humidity is 20\n");
 printf("Death-4 million\n");
 printf("Electrycity Demand-5\n");
 printf("Co2 emission is 400-500 ppm\n");
 break;
 case 'B':
 printf("The temperature :%f C\n",tem+0.4);
 printf("The relative humidity is 30\n");
 printf("Death-5-6 million\n");
 printf("Electrycity Demand-7\n");
 printf("Co2 emission is 500-600 ppm\n");
 break;
 case 'C':
 printf("The temperature :%fC\n",tem+0.8);
 printf("The relative humidity is 30-40\n");
 printf("Death-6-8 million\n");
 printf("Electrycity Demand-15\n");
 printf("Co2 emission is 500-1000 ppm\n");
 break;
 case 'D':
 printf("The temperature :%fC\n",tem+1.2);
 printf("The relative humidity is 40\n");
 printf("Death-8 and above million\n");
 printf("Electrycity Demand-10\n");
 printf("Co2 emission is 800-1200 ppm\n");
 break;
 default:
 printf("XXXXXXXXXXX");
 }
 return 0;
}
