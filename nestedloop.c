// nested loop in c
#include<stdio.h>
void main()
{
    int num,i;
    for(num=2;num<=6;num++)
    {
        for(i=1;i<=10;i++)
        {
            printf("%d  ",num*i);
        }
        printf("\n");
    }
}