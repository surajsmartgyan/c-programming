// wap to print pattern using for loop
#include<stdio.h>
void main()
{
    int a,b;
    for(a=1;a<=4;a++)
    {
        for(b=1;b<=a;b++)
        {
          printf("%d ",a*b);
        }
        printf("\n");
    }
}