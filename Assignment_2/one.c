#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Welcome to the program to perform Aritmetic Operation \n\n");
    float a,b; 
    printf("Enter the first number\n");
    scanf("%f",&a);
    printf("\nEnter the second number\n");
    scanf("%f",&b);

    printf("\n %f + %f = %0.2f", a,b,a+b);
    printf("\n %f - %f = %0.2f",a,b,a-b);
    printf("\n %f * %f = %0.2f", a,b,a*b);
    printf("\n %f / %f = %0.2f",a,b,a/b);
    getch();

}