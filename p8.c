#include<stdio.h>
int main(int argc, char const *argv[])
{
  int day,month,years,week;
  printf("Enter days in your life :");
  scanf("%d",&day);
  years=day/365;
  day=day%365;
  month=day/30;
  day=day%30;
  week=day/7;
  day=day%7;
  printf("years:%d month:%d week:%d day:%d", years,month,week,day);
    
}
