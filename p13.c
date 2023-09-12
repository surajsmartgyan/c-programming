// wap to calculate simple interest.
#include<stdio.h>
void main(int argc, char const *argv[])
{
  int amount;
  printf("Enter your principal amount:");
  scanf("%d",&amount);
  float rate;
  printf("Enter your interest rate:");
  scanf("%f",&rate);
  float time;
  printf("Enter your interest time :");
  scanf("%f",&time);
  float si;
  si=(amount*rate*time)/100;
  printf("Your total simple interest:%f",si);
}
