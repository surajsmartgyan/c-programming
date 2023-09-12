// wap to print value in new line 
#include<stdio.h>
void main()
{
    int num,rem;
    printf("Enter any vlaue :");
    scanf("%d",&num);
    while(num>0)
    {

        rem=num%10;
        printf("%d\n",rem);
        num=num/10;

    }
}