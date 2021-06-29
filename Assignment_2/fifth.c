#include<stdio.h>
#include<conio.h>
int main()
{
    float p,r,t,si;
    printf("\n Enter the Principal amount ");
    scanf("%f",&p);
    printf("\n Enter the rate of interest  ");
    scanf("%f",&r);
    printf("\n Enter the teneure ");
    scanf("%f",&t);
    printf("\n\n The simple interest is %0.2f ",(p*r*t)/100);
    getch();

}