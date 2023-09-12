// wap input three float numbers and find average of numbers.
#include<stdio.h>
float main(int argc, char const *argv[])
{
   float a,b,c,avg;
   printf("Enter first number:");
   scanf("%f",&a);
   printf("Enter second number:");
   scanf("%f",&b);
   printf("Enter third number:");
   scanf("%f",&c);
   avg=(a+b+c)/3;//error
   printf("Average of three numbers:%d",avg);

}
