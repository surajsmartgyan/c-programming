#include<stdio.h>
void main()
{
    int rev,num,sum=0,t;
    printf("Enter any nummbers :");
    scanf("%d",&num);
    while(num>0)
    {
        rev=num%10;
        sum=sum*10+rev;
        num=num/10;
    }
    if(rev==t)
    {
     printf("numbers is a polidrome number");
    }
    else 
    {
        printf("Numbers is not polidrome number");
    }
}