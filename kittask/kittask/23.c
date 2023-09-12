#include<stdio.h>
void main()
{
	int a,b,c=5;
	for(a=1;a<=5;a++)
	{
	  for(b=5;b>=a;b--)
	  {
	  	printf("%d ",c);
	  }
	  c=c-1;
      printf("\n");
	}
	
}