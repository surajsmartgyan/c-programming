// print pass or fail using float data type 
#include<stdio.h>
#include<conio.h>
void main()
{
    float a;
    printf("Enter your parcentage:");
    scanf("%f",&a);
    if(a>33)
    {
        printf("you are pass:");
    }
    else{
        printf("you are fail:");
    }
    getch();
    
}
