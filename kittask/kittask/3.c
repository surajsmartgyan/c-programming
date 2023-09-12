//wap to print a gender male/female according t given m/f
#include<stdio.h>
void main()
{
  char gender;
  printf("Enter your gender:\n");
  printf("press m or M for Male :\n");
  printf("press f or F for Female:\n");
  scanf("%c",&gender);
  switch (gender)
  {
  case 'm':
  case 'M':
    printf("Male\n");
    break;
case 'f':
case 'F':
    printf("Female\n");
    break; 
  default: 
  printf("Enter invailide char");
    break;
  }

}