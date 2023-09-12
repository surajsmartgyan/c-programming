#include<stdio.h>
void main()
{
    int x;
    for(x=2;x<=256;x=x*x)
    {
        printf("%d\n",x);
    }
}