#include <stdio.h>
#include <stdlib.h>


int main()
{
  char* months[]={"January","February","March","April","May","June","July","August","September","Octeber","November","December"};
  int month_day[]={31,28,31,30,31,30,31,31,30,31,30,31};
  int year ,month,day,days_in_month,week_day=0,starting_day;
  printf("Enter the year:");
  scanf("%d",&year);


   printf("\n\n           %d CALENDER       ",year);

  if (year%4==0&&year%100!=0||year%400==0)
   month_day[1]=29;

   starting_day=first_day(year);


  for(month=0;month<12;month++)
  {
    days_in_month=month_day[month];
    printf("\n\n_______________%s_______________",months[month]);
    printf("\n\n   Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    for(week_day=0;week_day<starting_day;week_day++)
    {
      printf("     ");
    }

    for(day=1;day<=days_in_month;day++)
    {
      printf("%5d",day);

      if(++week_day>6)
      {
        printf("\n");
        week_day=0;
      }
      starting_day=week_day;
    }

  }

}
int first_day(int year)
{
  int day;
  day=(((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7;
  return day;
}
