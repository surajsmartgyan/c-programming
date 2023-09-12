//calculate the sum of an array
#include<stdio.h>
void main()
{
    int arr[10],i,k=0;
    printf("Enter number to calculate the total number of an array:");
    for(i=0;i<=9;i++)
    {
     scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++)
    {
         k=k+arr[i];
    }
     printf(" total value of an array:%d",k);
}