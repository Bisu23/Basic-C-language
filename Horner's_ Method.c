//implementation of Horner's Method for polynomial valuation
//Horner’s method can be used to evaluate polynomial in O(n) time. 
// For example,let us consider the polynomial 7x^3 + 6x^2 + 2x – 4. 
//The polynomial can be evaluated as ((7x + 6)x + 2)x – 4. 
//Following is implementation of Horner’s Method. 



#include<stdio.h>
#include<stdlib.h>
double HornessMethod(double *arr,int n,double x)
{
 double t = 0.0;
 for(int i = n;i>=0;i--)
 {
  t = t*x + arr[i];
 }
 return t;
}

int main()
{
 int n;
 printf("Enter degree of the polynomial:");
 scanf("%d",&n);
 double *arr;
 //int p=123;
 //double *ptr = &p;
 arr = (double*) malloc((n+1)*sizeof(double));
 double input, valuation;
 printf("Enter the polynomial in coefficient representation start from constant term....\n");
 for(int j = 0;j<=n;j++)
{
 printf("%d entry:",j);
 scanf("%lf",&arr[j]);
}
 printf("Enter the input:");
 scanf("%lf",&input);
 valuation = HornessMethod(arr,n,input);
 printf("The valuation is:%lf", valuation);
}
