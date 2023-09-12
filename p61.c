//print n to 100 even numbers 
#include<stdio.h>
void main()
{
    int a;
    printf("Enter 1 to 100 any numbers to print even number:");
    scanf("%d",&a);
    for(;a<=100;a=a+1){
    if(a%2==0)
    {
        printf("%d\t",a);
    }
    }
}