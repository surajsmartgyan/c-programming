// wap to print pattern using for nested loop
#include<stdio.h>
void main()
{
    int i,j,k=1,s;
    for(i=1 ;i<=5;i++)
    {
     for(s=1;s<=(5-i);s++)
     {
     printf(" ");
     }
     for(j=1;j<i;j++)
     {
      printf("%d ",k);;
      k++;
     }
     printf("\n");
    }
}