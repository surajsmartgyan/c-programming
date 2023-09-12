//wap to print reverse of a number 
#include<stdio.h>
void main()
{
    int i, rem, sum=0;
    printf("Enter numbers to print reverse numbers :");
    scanf("%d",&i);
    while(i>0)
    {
        rem=i%10;
        sum=sum+rem;
        i=i/10;
        printf("%d\n",rem);
    }
    
}