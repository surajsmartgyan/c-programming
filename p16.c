// first variable value swap second variable value without using third variable
#include<stdio.h>
void main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter 2 number:");
    scanf("%d%d",&a,&b);//a=10,b=20
    a=b;//b=10
    b=a;//a=10
    printf("A:%d B:%d",a,b);



}
