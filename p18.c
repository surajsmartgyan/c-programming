// wap second hours and minutes and second.
#include<stdio.h>
void main(int argc, char const *argv[])
{
  int second,hours,minutes,s;
  printf("Enter numbers of seconds:");
  scanf("%d",&second);
  hours=second/3600;
  hours=second%3600;
  minutes=second/60;
  minutes=second%60;
  s=second%60;
  printf("Hours:%d minutes:%d second:%d" ,hours,minutes,s);

}
