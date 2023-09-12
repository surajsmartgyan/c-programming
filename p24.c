// Enter first b
#include<stdio.h>
void main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
    printf(" div of:%d",a-b);
    }
    else{
        printf("Enter first>second=%d",b-a);
    }
}