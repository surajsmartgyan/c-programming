// if condition given condtion is true code execute and given condition is not true code will be not executed .
#include<stdio.h>
void main(int argc, char const *argv[])
{
    int a,b,sum;
    printf("Enter first numbers:");
    scanf("%d",&a);
    printf("enter second numbers:");
    scanf("%d",&b);
    sum=a+b;
    if(a>0 && b>0)
    {
    printf(" Sum of:%d",sum);
    }
}
