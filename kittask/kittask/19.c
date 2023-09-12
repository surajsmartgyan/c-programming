// wap to print triangle using for nested loop
#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
      for(k=i;k<=5;k++)
      {
        printf(" ");
      }
     for(j=1;j<=i;j++)
     {
      printf("%d ",i);
     }
     printf("\n");
    }
}