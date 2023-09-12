// nested for loop
#include<stdio.h>
void main()
{
    int i,k;
    i=5;
    k=8;
    for(i=1;i<=5;i++)
    {
     for(k=1;k<=8;k++)
     {
        printf("%d",k);
     }
     printf("\n");
    }
}