// To find the largest element of an array
#include<stdio.h>
void main()
{
    int arr[5],i,j=0;
    printf("Enter 4 numbers to find gretest number:");
    for(i=0;i<=4;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(i=0;i<=4;i++)
    {
     if(arr[i]>j)
     {
      j=arr[i];
     }
    }
    printf(" Gretest number of an array: %d",j);
}