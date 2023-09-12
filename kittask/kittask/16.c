//wap wap to display the multiplication table vertically frome 1 to n
#include<stdio.h>
void main()
{
    int n,tem,i;
    printf("Enter number to print 1 to n table:");
    scanf("%d",&n);
    for(i=1;i<=n;i++) 
    {
    for(tem=n;tem<=n*10;tem=tem+n)
    {
     printf("%d\t",tem);
    }
    printf("\n");
    }
} 