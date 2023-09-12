//check triangle is equilateral isoscels or scalene 
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three value to give a triangle line:");
    scanf("%d%d%d",a,b,c);
    if(a=b=c)
    {
    printf("Your triangle is equilateral ");
    }
    else if()
    {
    printf("Your triangle is isoscels ");
    }
    else if(a!=b && b!=a && a!=c && c!=a && b!=c && c!=b)
    {
      printf("Your triangle is scalene ");   
    }
    else{
        printf("Enter your value is invailide ")
    }
}