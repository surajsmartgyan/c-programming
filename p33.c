//print leapyear or not .
#include<stdio.h>
void main()
{
    int a;
    printf("Enter value of this year to print leapyear or not :");
   scanf("%d",&a);
   if(a==366)
   {
    printf("This is a leap year");
   }
   else if(a==365)
   {
    printf("This year is a simple year");
   }
   else{
    printf("You are enter invailide value");
   }
}
