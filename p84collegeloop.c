// wap to print $****$ using for nested loop
#include<stdio.h>
void main()
{
    int i,j;
    for(j=1;j<=4;j++)
    {
        for(i=1;i<=6;i++)
        {
         if(i==1 || i==6)
          printf("$");
          else
          printf("*");
        }
        printf("\n");
    }
}