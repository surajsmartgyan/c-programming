#include<stdio.h>
void main()
{
    int a,sum=0;
    for (a=1;a<=20;a++)
    {
        if(a%2==0)
        sum=sum+a;
    }
    printf("%d",sum);
}