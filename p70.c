// using ladder if else statement print grade.
#include<stdio.h>
void main()
{
    float a;
    printf("Enter your percantage to print grade : ");
    scanf("%f",&a);
    if(a<=90)
    {
        printf("A Grade");
    }
    else if(a<75 && a<=90)
    {
        printf("B Grade");
    }
     else if(a<61 && a<=74)
    {
        printf("C Grade");
    }
     else if(a<46 && a<=60)
    {
        printf("D Grade");
    }
     else if(a<36 && a<=45)
    {
        printf("E Grade");
    }
     else if(a<35 && a<=0)
    {
        printf("Fail");
    }
    else {
        printf("You are enter invailide value ");
    }
}