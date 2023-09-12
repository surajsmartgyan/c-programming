// first number dived in to second number.
#include<stdio.h>
void main(int argc, char const *argv[])
{
    int a,b,div;
    printf("Enter first numbers:");
    scanf("%d",&a);
    printf("enter second numbers:");
    scanf("%d",&b);
    div=a-b;
    if(a>b)
    {
    printf(" div of:%d",div);
    }
}