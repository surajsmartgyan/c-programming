//ladder else if|print percantage and division.
#include<stdio.h>
void main()
{
   int per;
   printf("Enter your percantage:");
   scanf("%d",&per);
   if(per>=0 && per<=32)
   {
    printf("You are fail");
   }
   else if(per>=33 && per<=45)
   {
    printf("You are pass 1st division");
   }
   else if( per>=46 && per<=59)
   {
    printf("You are pass 2nd division");
   }
   else if( per>=60 && per<=100)
   {
    printf("You are pass 1st division");
   }
   else 
   {
    printf("Enter only positive value ");
   }
}
