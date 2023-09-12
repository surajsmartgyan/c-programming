// wap nested loop
#include<stdio.h>
void main()
{
    int i=5,j=5;
    for(i=5;i>=1;i--)
    {
      for(j=1;j<=5;j++)
      {
        printf("%d",i);
      }
      printf("\n");
    }

}