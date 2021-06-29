// To display the harmmonic progression 
#include<stdio.h>
int main()
{
    float a, d, sum = 0; 
    int n;
    printf("Enter the N value ");
    scanf("%f",&n);
    printf("Enter the start value of progression\n");
    scanf("%f", &a);
    printf("Enter the common difference \n");
    scanf("%f",d);


    for (int  i = 1; i <= n; i++)
    {
        printf("  1 / %f ", a);
        sum = sum +(1/a);
        a=a+d;
    }
    printf("The sum of the Harmonic Progression is %f", sum);
    

}