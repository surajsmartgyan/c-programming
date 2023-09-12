//wap to check a given nummber is a polidrome number or not 
#include<stdio.h>
void main()
{
    int tem,num,sum=0,rem;
    printf("Enter any value :");
    scanf("%d",&num);
    tem=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    if(sum==tem)
    {
        printf("Given number is a polidrome");
    }
    else{
        printf("Number is not polidrome");
    }
}