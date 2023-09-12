// structure in c 
struct suraj 
{
     int rollno;
     char name[10];
     float fee;
};
#include<stdio.h>
void main()
{
    struct suraj s1,s2;
    printf("Enter your roll no:");
    scanf("%d",&s1.rollno);
    fflush(stdin);
    printf("Ente your name :");
    scanf("%s",&s1.name);
    printf("Enter your total fee :");
    scanf("%f",&s1.fee);
    printf("rollno:%d Name:%s Fee:%f",s1.name,s1.rollno,s1.fee);
}