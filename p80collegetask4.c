// wap to check wheather a given number is armstrong number or not .
#include<stdio.h>
void main()
{
    int num,rem,tem,sum=0;
    printf("Enter any to find this number is equal or not:");
    scanf("%d",&num);
    tem=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    if(tem==sum)
    {
        printf("Number is a armstrong");
    }
    else{
        printf("Numbers is not armstrong");
    }
}