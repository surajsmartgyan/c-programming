// nested loop in c
#include<stdio.h>
void main()
{
    int num,i;
    printf("Enter number to print table:");
    scanf("%d",&num);
    for(i=0;i<=10;i++)
    {
        printf("%d   ",num*i);
    }
}