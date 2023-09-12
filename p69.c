// calculate electricity bill.
#include<stdio.h>
void main()
{
    int a;
    printf("Enter your total amount to print charge :");
    scanf("%d",&a);
    if(a<0 && a<=199)
    {
        printf("charge of amount:@1.20");
    }
    else if(a<200 && a<=400)
    {
        printf("charge of amount:@1.50");
    }
     else if(a<401 && a<=600)
    {
        printf("charge of amount:@1.80");
    }
     else if(a<600 )
    {
        printf("charge of amount:@2.00");
    }
    else{
        printf("enter invailide value ");
    }
}