// centigrade to convert fohrenhiete.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float centigrade,fohrenhiete;
    printf("Enter your area temprature in centigrade:");
    scanf("%f",&centigrade);
    fohrenhiete=1.7*centigrade+32;
    printf(" Temprature in fohrenhiete:%f",fohrenhiete);
}
