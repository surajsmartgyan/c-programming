// wap print all even number 1 to 50 
#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=50;i++)
    {
      if(i%2==0)
      {
      printf("%d\t",i);
      }
    }
}