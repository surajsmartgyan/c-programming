// wap to intput 2 numbers from user and add the number until user press
// y for the next iteration

#include<stdio.h>
void main()
{
 int i,j;
 char ch;
 start:
 printf("Ente two numbers :");
 scanf("%d%d",&i,&j);
 printf("result =%d\n",i+j);
 printf("Do you repeate this step press x/y:");
 fflush(stdin);
 scanf("%c",&ch);
 if(ch=='y'|| ch=='Y')
 {
    goto start;
 }
}