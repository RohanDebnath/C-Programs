#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    printf("Program to get the area of Equilateral Triangle\n\n");
    printf("Enter the length of the side of triangle ");
    float a,area,sq;
    scanf("%f",&a);
    sq = sqrt(3);
    area=(sq/4)*a*a;
    printf("\n The area of the Triangle = %0.2f unit",area);
    getch();

}
