//wap to 5 subject marks and calculate percentage of 10th.
#include<stdio.h>
void main(int argc, char const *argv[])
{
    int hindi,english,math,science,socialscience,drawing,totalNum;
    float percantage;
    printf("Enter 10th sub hindi num:");
    scanf("%d",&hindi);
    printf("Enter 10th sub english num:");
    scanf("%d",&english);
    printf("Enter 10th sub math num:");
    scanf("%d",&math);
    printf("Enter 10th sub science num:");
    scanf("%d",&science);
    printf("Enter 10th sub socialscience num:");
    scanf("%d",&socialscience);
    printf("Enter 10th sub drawing num:");
    scanf("%d",&drawing);
    totalNum=hindi+english+math+science+socialscience+drawing;
    printf("Your total 10th num:%d",totalNum);
    percantage=totalNum/5;
    printf("\nyour 10th percantage:%f",percantage);
}
