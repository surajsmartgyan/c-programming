//wap to print 3*3 array and print sum of all row element seprately.
#include<stdio.h>
void main()
{
    int arr[3][3],i,j,temp=0,s=0,d=0;
    printf("Enter number to print array in matrix:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("total row of three:\n");
    for(i=0;i<=2;i++)
    {
      for(j=0;j<=2;j++)
      {
         printf("%d ",arr[i][j]);
      }
      printf("\n");
    }
    printf("sum of row 1:");
    for(i=0;i<=0;i++)
    {
      for(j=0;j<=2;j++)
      {
         temp=temp+arr[i][j];
      }
      printf("\n");
    }
    printf("%d",temp);
    printf("\n");
    printf("sum of row 2:");
    for(i=1;i<=1;i++)
    {
      for(j=0;j<=2;j++)
      {
         s=s+arr[i][j];
      }
      printf("\n");
    }
    printf("%d",s);
    printf("\n");
    printf("sum of row 3:");
    for(i=2;i<=2;i++)
    {
      for(j=0;j<=2;j++)
      {
         d=d+arr[i][j];
      }
      printf("\n");
    }
    printf("%d",d);
    
    
}