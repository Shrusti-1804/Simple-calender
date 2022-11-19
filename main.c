#include <stdio.h>
#include <stdlib.h>


int main()
{
  char* months[]={"January","Febuary","March","April","May","June","July","August","September","Octeber","November","Decmber"};
  int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};
  int year ,month,day,days_in_month,week_Days=0,starting_Days,first_day;
  printf("Enter the year:");
  scanf("%d",&year);


   printf("\n\n           %d CALENDER      ",year);

  if (year%4==0&&year%100!=0)
   month_Day[1]=29;

   starting_Days=first_day(year);


  for(month=0;month<12;month++)
  {
    days_in_month=month_Day[month];
    printf("\n\n_______________%s_______________",months[month]);
    printf("\n\n   Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    for(week_Days=0;week_Days<starting_Days;week_Days++)
    {
      printf("     ");
    }

    for(day=1;day<=days_in_month;day++)
    {
      printf("%5d",day);

      if(++week_Days>6)
      {
        printf("\n");
        week_Days=0;
      }
      starting_Days=week_Days;
    }

  }

}
int first_day(int year)
{
  int day;
  day=(((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7;
  return day;
}
