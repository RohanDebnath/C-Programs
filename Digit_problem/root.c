// Finding the roots of quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float root1,root2;
    float d;
    printf("Enter the values of a b and c in Quadratic eq aX^2+bX+c\n");
    scanf("%f %f %f",&a,&b,&c);

    d=(b*b)-4*a*c;
    root1=(-b+sqrt(d))/(2*a);
    root2=(-b-sqrt(d))/(2*a);

    printf("The value of root 1 is %0.2f",root1);
    printf("The value of root 2 is %0.2f",root2);


}