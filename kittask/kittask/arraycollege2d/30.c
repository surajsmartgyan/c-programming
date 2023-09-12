// wap to find the smallest element of an array
#include<stdio.h>
void main()
{
    int arr[8],i,k;
    printf("Enter number to find smallest number:");
    for(i=0;i<=7;i++)
    {
     scanf("%d",&arr[i]);
    }
    for(i=0;i<=7;i++)
    {
      if(k>=arr[i])
      {
        k=arr[i];
      }
    }
    printf(" Smallest number in array:%d",k);
}