// wap to create calculator using switch statement.
#include<stdio.h>
void main()
{
    int a,b,ch=4,x;
    printf("Enter two numbers and choose choice than calculate value :");
    scanf("%d%d",&a,&b);
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
         x=a+b;
        printf("sum of value:%d",x);
        break;
    case 2:
        x=a-b;
        printf("sub of value:%d",x);
        break;
    case 3:
         x=a*b;
        printf("multi of value:%d",x);
        break;
    case 4:
        x=a/b;
        printf("div of value:%d",x);
        break;
    default:
       printf("You are enter invailide value ");
        break;
    }


}