//wap to print sum of digits
#include<stdio.h>
void main()
{
    int num,sum=0,rem;
    printf("Enter any number to calculate of sum:");
    scanf("%d",&num);
    while(num>0)
    {  
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("sum of value:%d",sum);
}