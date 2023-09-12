//wap to input basic salary od a employee and calculate gross salary.
#include<stdio.h>
void main()
{
    int bs,hra;
    printf("Enter your basic salary :");
    scanf("%d",&bs);
    if(bs>0 && bs<=10000)
    {
           hra=(bs*10)/100;
           printf(" Your gross salary:%d",(bs+hra));
    }
     else if(10001>bs && bs<=25000)
    {
           hra=(bs*15)/100;
           printf(" Your gross salary:%d",(bs+hra));
    }
    else if(25001>bs && bs<=100000)
    {
       hra=(bs*20)/100;
       printf(" Your gross salary:%d",(bs+hra));
    }
    else
    {
        printf("You are enter invailide value ");
    }
}