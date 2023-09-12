// wap to print number to character.
#include<stdio.h>
void main()
{
    int rem,num,sum=0;
    printf("Enter number to print character");
    scanf("%d",&num);//123456
    while(num>0)
    {
        rem=num%10;
        sum=sum*10+rem; //654321
        num=num/10;
    }
    num=sum;
    while(num>0)
    {
      rem=num%10;
      num=num/10;
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
    case 0:
        printf("ZERO ");
        break;
      default:
      printf("Enter invailide  value");
        break;
      }
    }
}