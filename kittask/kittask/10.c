//wap reverse a given nummber using for loop
#include<stdio.h>
void main()
{
    int a ,n;
    printf("Enter any number to print reverse number:");
    scanf("%d",&a);
    for(n=a;a>=1;a=a-1)
    {
     printf("%d\t",a);
    }
}
