// prinnt fibonacci series one to n using while loop.
#include<stdio.h>
void main()
{
  int i,k,a=0,b=1,j;
  printf("Enter number of term...");
  scanf("%d",&i);
  for(j=1;j<=i;j++)
  {
     printf("%d ",a);
     k=a+b;
     a=b;
     b=k;
  }

}