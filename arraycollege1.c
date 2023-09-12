// print 5 subject numbers in array using for loop
#include<stdio.h>
void main()
{
    int sub[5],i,sum=0;
    printf("Enter all five subjects name :");
    for(i=0;i<=4;i++)
    {
     scanf("%d",&sub[i]);
    }
    for(i=0;i<=4;i++)
    {
    sum=sum+sub[i];
    }
    printf("Total marks:%d",sum);
}