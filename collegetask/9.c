//wap to print 3*3 array and print all diagonal elements .
#include<stdio.h>
void main()
{
    int arr[3][3],i,j;
    printf("Enter number to print array in matrix:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("print diagonal element in array:\n");
    for(i=0;i<=2;i++)
    {
      for(j=0;j<=i;j++)
      {
        printf("%d\t",arr[i][j]);
      }
      printf("\n");
    }
    
}