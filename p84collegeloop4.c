// wap to print piramid using nested loop
#include<stdio.h>
void main()
{
    int a,b,x;
    for(a=1;a<=4;a++)
    {
    for(x=1;x<=(4-a);x++)
     { 
       printf(" ");
     }  
    for(b=1;b<=a;b++)
    {
     printf("* ");
    }
    printf("\n");
    }
   
}