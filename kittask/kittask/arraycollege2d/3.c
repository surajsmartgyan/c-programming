// 2d array
#include<stdio.h>
void main()
{
    int arr[3][3],r,c;
    printf("Enter all elements of 3*3 array");
   for(r=0;r<=2;r++)
   {
    for(c=0;c<=2;c++)
    {
        scanf("%d",&arr[r][c]);
    }
   }
   for(c=0;c<=2;c++)
   {
    for(r=0;r<=2;r++)
    {
      printf("%d\t",arr[c][r]);
    }
    printf("\n");
   }
}

