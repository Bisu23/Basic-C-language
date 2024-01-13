// insertion sort  
#include<stdio.h>
void insertionsort(int arr[],int size)
{
 int i,j,key;
 if(size==1)
{
 return;
}
for(i=1;i<size;i++)
{
 key = arr[i];
 j=i-1;
 while(j>=0 && arr[j]>key)
{
 arr[j+1] = arr[j];
 j = j-1;
}
 arr[j+1] = key;
}
}

// main fumction:
int main()
{
int size,arr[]={90,82,70,91,60,40,25,11};
// canculate size of the array
size = sizeof(arr)/sizeof(arr[0]);
// dispaly the array:
printf("The original array:");
for(int i=0;i<size;i++)
{
 printf("%d\t",arr[i]);
}
insertionsort(arr,size);
// dispaly the sorted array:
printf("\nThe sorted array:");
for(int i=0;i<size;i++)
{
 printf("%d\t",arr[i]);
}
return 0;
}
