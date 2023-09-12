//wap to input A 3*4 array and print all element of last column
#include<stdio.h>
void main()
{
    int arr[3][4],i,j,k;
    printf("Enter number to print array:");
    for(i=0;i<=2;i++)
    {
      for(j=0;j<=3;j++)
       {
         scanf("%d",&arr[i][j]);
       }
    }

    for(i=0;i<=2;i++)
    {
      for(j=0;j<=3;j++)
       {
         printf("%d\t",arr[j][i]);
       }
       printf("\n");
    }
    
    
}