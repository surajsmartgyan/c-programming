// wap to print sum of digits in given integer
#include<stdio.h>
void main()
{
    int i,rem,sum=0;
    printf("Enter number:");
    scanf("%d",&i);
    while(i>0)
    {
       rem=i%10;
       sum=sum+rem;
       i=i/10;
    }
    printf("total of sum:%d",sum);
} 