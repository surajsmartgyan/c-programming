// wap accepts three numbers and find maximun numbers.
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three to find maximum number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("Maximum number:%d",a);
    }
    else if(b>a && b>c)
    {
        printf("Maximum number:%d",b);
    }
    else if(c>b && c>a)
    {
        printf("Maximum number:%d",c);
    }
    else 
    {
        printf("You are enter invailide value ");
    }
    }