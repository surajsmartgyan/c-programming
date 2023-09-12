//wpp to input A 3*3 array and print all elements of last columns 
#include<stdio.h>
void main()
{
    int arr[3][3],i,j;
    printf("Enter number to print array 3*3 :");
    for(i=0;i<=2;i++)
    {
       for(j=0;j<=2;j++)
       {
        scanf("%d",&arr[i][j]);
       }
    }
    for(i=0;i<=2;i++)
    {
     for(j=0;j<=2;j++)
     {
       printf("%d\t",arr[i][j]);
     }
     printf("\n");
    }
}