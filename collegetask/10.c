//wap to print 3*3 array and its inverse.
#include<stdio.h>
void main()
{
    int arr[3][4],i,j,temp;
    printf("Enter number to print array in matrix:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("print matrix  last row in array:\n");
    for(j=0;j<=3;j++)
    {
      for(i=0;i<=2;i++)
      {
       temp=arr[i][j];
      }
     printf("%d ",temp);
    }
    
}