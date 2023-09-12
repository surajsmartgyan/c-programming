// wap to check a given number is armstrong
#include<stdio.h>
void main()
{
    int num,tem,sum=0,rem;
    printf("Enter any number to check armstrong or not :");
    scanf("%d",&num);
    tem=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    if(sum==tem)
    {
     printf("number is armstrong");
    }
    else{
        printf("Number is not armstrong ");
    }
    
}