//wap to print check even or odd numbers using switch statement 
#include<stdio.h>
void main()
{
  int a;
  printf("Enter any number to check even or odd:");
  scanf("%d",&a);
  switch((a%2))
  {
  case 0:
          printf("%d number is even:",a);
    break;
  case 1:
          printf("%d number is odd:",a);
    break;
  
  }
}