// print fail and pass using int data type 
#include<stdio.h>
int main()
{
    int x;
    printf("Enter your parcantage:");
    scanf("%d",&x);
    if(x>33)
    {
        printf("You are pass:");
    }
    else{
        printf("you are fail:");
    }
}
