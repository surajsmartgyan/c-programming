#include<stdio.h>
void main()
{
    int i,j;
    char ch;
    start:
    printf("Enter two numbers :");
    scanf("%d%d",&i,&j);
    printf("Result =%d\n",i+j);
    printf("Do you repeate this step press x/y:");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
    {
        goto start;
    }

}