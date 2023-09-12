// wap to print all even numbers within n to 100 
#include<stdio.h>
void main()
{
int i;
printf("Enter any 1 to 100 numbers :");
scanf("%d",&i);
for(;i<=100;i=i+1)
{
    if(i%2==0)
    printf("%d\t",i);
}
}