// wap to print first n natural numbers
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter any numbers :");
    scanf("%d",&n);
    for(i=1;i<=n ;i=i+1)
    {
        printf("%d\n",i);
    }
}