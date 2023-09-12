#include<stdio.h>
void main()
{
    int a,sum=0;
   for(a=1; ;a++)
   {
    if(a%2==1)
     sum=sum+a;
   }
   printf("%d",sum);
}