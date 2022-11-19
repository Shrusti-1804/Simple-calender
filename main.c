#include <stdio.h>
#include <stdlib.h>


int main()
{
  char* months[]={"January","Febuary","March","April","May","June","July","August","September","Octeber","November","Decmber"};
  int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};
  int year ,month,day,daysinmonth,weekDays=0,startingDays;
  printf("Enter the year:");
  scanf("%d",&year);


   printf("\n\n           %d CALENDER      ",year);

  if (year%4==0&&year%100!=0||year%400==0)
   monthDay[1]=29;

   startingDays=firstday(year);


  for(month=0;month<12;month++)
  {
    daysinmonth=monthDay[month];
    printf("\n\n_______________%s_______________",months[month]);
    printf("\n\n   Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    for(weekDays=0;weekDays<startingDays;weekDays++)
    {
      printf("     ");
    }

    for(day=1;day<=daysinmonth;day++)
    {
      printf("%5d",day);

      if(++weekDays>6)
      {
        printf("\n");
        weekDays=0;
      }
      startingDays=weekDays;
    }

  }

}
int firstday(int year)
{
  int day;
  day=(((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7;
  return day;
}
