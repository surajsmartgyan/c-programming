// simple input vise calculater
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1-sum, 2-sub,3-multiply,4-division,5-remainder\n");
    scanf("%d",&c);
    printf("Enter first numbers:");
    scanf("%d",&a);
    printf("Enter second numbers:");
    scanf("%d",&b);
    
    if(c==1)
    {
        
        printf("sum:%d",a+b);
    }
    else if(c==2)
    {
        printf("sub:%d",a-b);
    }
    else if(c==3)
    {
        printf("multiply:%d",a*b);
    }
    else if(c==4)
    {
        printf("division:%d",a/b);
    }
    else if(c==5)
    {
        printf("remainder:%d",a%b);
    }
   
}

