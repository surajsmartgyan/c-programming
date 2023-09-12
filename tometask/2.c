// wap to print number to convert character.
#include<stdio.h>
void main()
{
     long int num,sum=0,rem;
    printf("Enter number to print character :");
    scanf("%ld",&num);// 12345
    while(num>0)
    {
       rem=num%10; 
       sum=sum*10+rem; //54321
       num=num/10;
    }
    num=sum;
    while(num>0)
    {
         rem=num%10;// 12345
         num=num/10;// num=0;
         switch (rem)
         {
         case 1:
            printf("ONE ");
            break;
         
         case 2:
            printf("TWO ");
            break;
         case 3:
             printf("THREE ");
            break;
          case 4:
            printf("FOUR ");
            break;
          case 5:
             printf("FIVE ");
            break;
         case 6:
           printf("SIX ");
            break;
         case 7:
            printf("SEVEN ");
            break;
         case 8:
            printf("EIGHT ");
            break;
         case 9:
            printf("NINE ");
            break;
         default:
         printf("INVAILID NUMBER ");
            break;
         } 
        
    }




}