//how can use else condition.
#include<stdio.h>
int main(int argc, char const *argv[])
{
  int a,b,sum;
    printf("Enter first numbers:");
    scanf("%d",&a);
    printf("enter second numbers:");
    scanf("%d",&b);
    sum=a+b;
    if(a>0 && b>0)
    {
    printf(" Sum of:%d",sum);
    }
    else{
        printf("You enter only positive numbers");
    }
}
