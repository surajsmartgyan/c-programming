// wap to print fibonacci series
#include<stdio.h>
void main()
{
    int i,j,k,a=0,b=1;
    printf("Enter number of terms...");
    scanf("%d",&j);
    for(i=1;i<j;i++)
    {
        printf("%d ",a);
        k=a+b;
        a=b;
        b=k;
    }
}