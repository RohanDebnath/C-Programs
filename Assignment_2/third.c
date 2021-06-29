#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Program to covert days in year week days");
    printf("\n\n Enter the days number \n");
    int day,y=0,w=0 ;
    scanf("%d",&day);
    if(day<7)
    {
        printf("Year=%d ",y);
        printf("Week= %d ",w);
        printf("day = %d ",day);
    }
    else if( day > 7 && day < 365)
    {
        printf("Year= %d ",y);
        printf("week = %d ",day/7);
        printf("day = %d ", day - ((day/7)*7));
    }
    else if( day > 365)
    {
       
        y = day/365;
        w = (day-(y*365))/7;
        day = day-(y*365)-(w*7);
        printf("Year = %d ", y);
        printf( " Week = %d ", w);
        printf("Day = %d", day);

    }

 getch();
}