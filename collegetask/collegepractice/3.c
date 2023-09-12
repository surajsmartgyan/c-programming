#include<stdio.h>
void main()
{
    int arr[5][5],s,k;
    for(s=0;s<=4;s++)
    {
     for(k=0;k<=4;k++)
     {
         scanf("%d",arr[s][k]);
     }
    }
    for(k=0;k<=4;k++)
    {
      for(s=0;s<=4;s++)
      {
       printf("%d\t",arr[k][s]);
      }
      printf("\n");
    }
}