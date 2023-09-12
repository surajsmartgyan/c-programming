// wap to find greatest number using array
#include<stdio.h>
void main()
{
    int arr[10],b,c=0;
    printf("Enter 10 numbers :");
    for(b=0;b<=9;b++)
    {
      scanf("%d",&arr[b]);
    }
    for(b=0;b<=9;b++)
    {
      if(arr[b]>c)
      {
      c=arr[b];
      }
    }
    printf("%d",c);
}