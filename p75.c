// how to print  any value every digit in new line 
#include <stdio.h>
void main()
{
    int rem,n;
    printf("Enter any numbers :");
    scanf("%d",&n);
    while(n>0)
    {
       rem=n%10;
       printf("%d\n",rem);
       n=n/10;
    }
}