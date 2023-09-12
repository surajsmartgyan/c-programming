// array practice using for loop
#include<stdio.h>
void main()
{
    int sub[10],i,sum=0;
    printf("Enter your 10 subjects marks :");
    for(i=0;i<=9;i++)
    {
       scanf("%d",&sub[i]);
    }
    for(i=0;i<=9;i++)
    {
       sum=sum+sub[i];
    }
    printf(" total numbers:%d" ,sum);
}