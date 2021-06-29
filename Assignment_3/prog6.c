// Write and execute a C program to calculate the root of a Quadratic Equation

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2,real,img;
    printf("Enter the values for a,b and c (ax^2 + bx + c) : ");
    scanf("%f %f %f",&a,&b,&c);
    d = pow(b,2) - (4*a*c);
    if(d>0)
    {
        r2 = (-(b) - sqrt(d)) / (2*a);
        r1 = (-(b) + sqrt(d)) / (2*a);
        printf("The roots of the equation %.2fx^2 + %.2fx + %.2f = 0 are real and distinct.\nThe roots are %.2f and %.2f.",a,b,c,r1,r2);
    }
    else if(d==0)
    {
        r1 = r2 = (-(b) + sqrt(d)) / (2*a);        
        printf("The roots of the equation %.2fx^2 + %.2fx + %.2f = 0 are real and equal.\nThe roots are %.2f and %.2f.",a,b,c,r1,r2);
    }
    else
    {
        real = -b / (2*a);
        img = sqrt(-d) / (2*a);
        printf("The roots of the equation %.2fx^2 + %.2fx + %.2f = 0 are real and imaginary.\nThe roots are %.2f + %.2fi and %.2f - %.2fi.",a,b,c,real,img,real,img);
    }
}