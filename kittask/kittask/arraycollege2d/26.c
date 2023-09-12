// program to print an array in reverse order
#include<stdio.h>
void main()
{
    int arr[10],i,j,k=0;
    printf("Enter number to print array in reverse order :");
    for(i=0;i<=9;i++)
    {
     scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++)
    {
      printf("%d\t",arr[i]);
    }
    printf("\n");
    for(j=9;j>=0;j--)
    {
       printf("%d\t",arr[j]);
    }
}