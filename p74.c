//wap to print XY coordinate 
#include<stdio.h>
void main()
{

    int a,b;
    printf("enter two value positive and nigative :");
    scanf("%d%d",&a,&b);
    if(a<=0 && b<=0)
    {
     printf("You are exist first coordinate");
    }
    else if( a>0 && b<0)
    {
     printf("You are exist seccond coordinate");
    }
    else if(a>0 && b>0)
    {
      printf("You are exist third coordinate");  
    }
    else if(a<0 && b>0)
    {
        printf("You are exist forth coordinate");
    }
    else{
        printf("You are enter invailide value ");
    }
}