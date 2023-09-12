// wap to find largest number within 10 number of series
#include<stdio.h>
void main()
{
    int arr[10],i,g;
    printf(" enter 10 nummber");
    for(i=0;i<=10;i++)
    {
      scanf("%d",&arr[i]);
    }
    g=arr[i];
    for(i==0;i<=9;i++)
    {
       if(arr[i]>g)
       g=arr[i];
    }
     printf("Greatest element=%d ",g);
}