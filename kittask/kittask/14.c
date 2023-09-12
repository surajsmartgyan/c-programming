// wap to print any number integer.
#include<stdio.h>
void main()
{
    int a,tem;
    printf("Enter number to print table:");
    scanf("%d",&a);
    for(tem=a;tem<=a*10;tem=tem+a)
    {
       printf("%d\t",tem);
    }
}