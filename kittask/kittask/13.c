// wap to print armstrong nummber from 1 to 1000
#include<stdio.h>
void main()
{
    int num=1000,rem,tem,sum=0;
    tem=num;
     while(num>0)
    {
        rem=num%10;
        num=num/10;
        sum=sum+rem*rem*rem;
       
    }
    if(sum==tem)
    {
     printf("number is armstrong");
    }
    else{
        printf("Number is not armstrong ");
    }

}