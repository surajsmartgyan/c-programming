// wap to print 2 d array
#include<stdio.h>
void main()
{
    int arr[4][4],i,j;
    printf("Enter to print 4*4 array :");
    for(i=0;i<=3;i++)
    {
       for(j=0;j<=3;j++)
       {
          scanf("%d",&arr[i][j]);
       }
    }
    for(j=0;j<=3;j++)
    {
     for(i=0;i<=3;i++)
     {
        printf("%d\t",arr[j][i]);
     }
     printf("\n");
    }
}