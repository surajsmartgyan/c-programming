// wap to calculate the average of an array
#include<stdio.h>
void main()
{
    int arr[10],i,j;
    float k=0;
    printf("Enter number to print array:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++)
    {
     k=k+arr[i];
    }
    printf("Average of array:%f",k/10);
}