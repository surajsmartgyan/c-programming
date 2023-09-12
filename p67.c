// read marks of three subjects and calculat the total percentage and division.
#include<stdio.h>
void main()
{
    int a,b,c,sum,div;
    int  per;
    printf("Enter three numbers :");
    scanf("%d%d%d",&a,&b,&c);
     sum=a+b+c;
     printf(" sum of total given value:%d\n",sum);
     per=(sum*100)/300;
     printf(" total percantage :%d\n",per);
     div=sum/3;
     printf("Division of total numbers:%d\n",div);
      
}