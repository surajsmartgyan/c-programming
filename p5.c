#include<stdio.h>
void  main()
{
    float salary,total;
    printf("Enter your monthly salary:");
    scanf("%f",&salary);
    total=salary+(salary/10);
    printf(" your gross sallery is:%f",total);
}