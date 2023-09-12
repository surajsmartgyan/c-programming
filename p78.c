// wap to print sum of digits  using while loop
#include<stdio.h>
void main()
{
 int num ,sum=0 ,rem;
 printf("Enter any vlaue :");
 scanf("%d",&num);
 while(num>0)
 {
    rem=num%10;
    sum=sum+rem;
    num=num/10;
 }
     printf("rem:%d, sum:%d,num:%d",rem,sum,num);
}