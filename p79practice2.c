#include<stdio.h>
void main()
{
    int num,rem,sum=0,t;
    printf("Enter any number:");
    scanf("%d",&num);
    t=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    if(sum==t)
    {
        printf("Number is polidrome");
    }
    else{
        printf("Number is not a polidrome ");
    }
}