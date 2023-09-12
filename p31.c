//how to find three biggest numbers.
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b>c)
    {
        printf("biggest no a:%d",a);
    }
      else if(b>a>c)
    {
        printf("biggest no b:%d",b);
    }
     else
    {
        printf("biggest no c:%d",c);
    }
}