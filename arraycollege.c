// wap to print 5 subject marks and find all sum
#include<stdio.h>
void main()
{
    int n;
    int sub[5];
    printf("Enter your hindi marks :");
    scanf("%d",&sub[0]);
    printf("Enter your english marks :");
    scanf("%d",&sub[1]);
    printf("Enter your math marks :");
    scanf("%d",&sub[2]);
    printf("Enter your physics marks :");
    scanf("%d",&sub[3]);
    printf("Enter your chemistry marks :");
    scanf("%d",&sub[4]);
    printf(" total numbers:%d",(sub[0]+sub[1]+sub[2]+sub[3]+sub[4]));

}