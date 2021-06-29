#include<stdio.h>
#include<conio.h>

int main()
{
    float sub1,sub2,sub3,sub4,sub5;
    printf("Enter the marks of 1st Subject \n ");
    scanf("%f",&sub1);
    printf("Enter the marks of 2nd Subject \n ");
    scanf("%f",&sub2);
    printf("Enter the marks of 3rd Subject \n ");
    scanf("%f",&sub3);
    printf("Enter the marks of 4th Subject \n ");
    scanf("%f",&sub4);
    printf("Enter the marks of 5th Subject \n ");
    scanf("%f",&sub5);
    printf("\n\n The Total marks of the student is %0.2f",(sub1+sub2+sub3+sub4+sub5));
    printf("\n\n The average is %0.2f", ((sub1+sub2+sub3+sub4+sub5)/5));
    printf("\n\n The percentage is %0.2f 5 ", (( (sub1+sub2+sub3+sub4+sub5)/500)*100));
    getch();
}