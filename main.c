#include <stdio.h>
#include <stdlib.h>

int days(int day,int month,int year)
{
 int f[]={0,1,2,3,4,5,6,7}
 year -= month<3;
 t=(year+year/4-year/100+yerar/400+f[month-1]+day)%7;
 return t;
}

char month (int month)
{
 char month
 switch (month)
 {
 case 1 :month"January"
      break;
 case 2:month"Febuary"
      break;
 case 3:month"March"
      break;
 case 4:month"April"
      break;
 case 5:month"May"
      break;
 case 6:month"June"
      break;
 case 7:month"July"
      break;
 case 8:month"August"
      break;
 case 9:month"September"
      break;
 case 10:month"Octeber"
      break;
 case 11:month"November"
      break;
 case 12:month"December"
      break;

 }
 return (month);

 int no days (int month,int year)
 {
 if (month ==1)
  return(31);
 if (month==2)
  {
    if (year%400==0||year%4==0&&year%100!=0)
    return (29);
    else
    return (28);
  }
   if (month ==3)
  return(31);
   if (month ==4)
  return(30);
   if (month ==5)
  return(31);
   if (month ==6)
  return(30);
   if (month ==7)
  return(31);
   if (month ==8)
  return(31);
   if (month ==9)
  return(30);
   if (month ==10)
  return(31);
   if (month ==11)
  return(30);
   if (month ==12)
  return(31);
 }
}

int calender (int year)
{
int days,i ,j, l,temp;
temp=days(1,1,year);
for(i=1;i<=12;i++)
{
  days=days number(i,year);
  printf("\n---------------%s---------------\n");
  get(month(i));
  printf("sun  Mon  Tue  Wed  Thu  Fri  Sat");
  for(l=1;l<temp;l++)
   {
   printf("  ");
   }
for (j=1,j<=days;j++)
 {
   printf("%d",j);
 if(++l>6)
 {
   l=0;
   printf("\n");
 }
}
if (l)
{
 printf("\n");
 temp=l;
}
}
return;

int main()
{
  int year;
  printf("Enter the year:")
  scanf("%d",&year);
  print calender(year);
  return 0;
}
