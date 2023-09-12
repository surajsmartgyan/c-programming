// wap read a temprature state blow :temp<0 freezing waether /temp 0-10 than very cold weather .
#include<stdio.h>
void main()
{
    int temp;
    printf("Enter your area temprature :");
    scanf("%d",&temp);
    if(temp<0 && temp<=-10)
    {
   printf("Freezing wheather:%d",temp);
    }
    else
    {
        printf("very cold weather:");
    }



}