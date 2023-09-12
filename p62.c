//print all numbers divisible by five 
#include<stdio.h>
void main()
{
    int a;
    for(a=5;a<=100;a=a+1){
    if(a%5==0)
    {
        printf("%d\t",a);
    }
    }
}