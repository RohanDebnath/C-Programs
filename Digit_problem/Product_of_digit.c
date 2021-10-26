//Write C program to calculate product of digits of a number

#include<stdio.h>
int main()
{
    int num, digit=1,z;
    printf("Enter your number\n");
    scanf("%d",&num);

    while (num>0)
    {
        z=num%10;
        digit=digit*z;
        num/=10;
    }
    printf("%d", digit);
    
}