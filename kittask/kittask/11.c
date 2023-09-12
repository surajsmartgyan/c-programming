// wap to check reverse a number & check if it is a polidrome
#include<stdio.h>
void main()
{
    int num,sum=0,tem,rem;
    printf("Enter number to check number is polidrom or not :");
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
     printf("Given number is polidrom");
    }
    else{
        printf("number is not polidrom");
    }

}