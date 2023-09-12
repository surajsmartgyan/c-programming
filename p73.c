// wap display n term of natural numbers and find sum.
#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++ )
    {  
      sum=sum+i;
      printf("%d \n",i);
   }
    printf("Sum of total value:%d",sum);
}