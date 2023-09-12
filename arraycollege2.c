// wap to search a number in a 10 numbers of series by using linear search
#include<stdio.h>
void main()
{
    int sub[10]={12,23,12,23,34,6,67,45,34,23},i,num,tem=0;
    printf("Enter numbers to search in array:");
    scanf("%d",&num);
    for(i=0;i<=9;i++)
    {
        if(num==sub[i])
        tem=1;
    }
    if(tem==1)
    printf("search successfull");
    else
    printf("search not found");
    

    
}