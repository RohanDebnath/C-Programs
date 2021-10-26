// WAP to swap First and last digit 

#include<stdio.h>
#include<math.h>
int main()
{
    printf("Enter your Digit \n");
    int n, First_digit, Digit , Last_digit, Swap;
    scanf("%d",&n);

    Last_digit=n%10;
    Digit= (int)log10(n);
    First_digit= (int)(n/pow(10,Digit));

    Swap = Last_digit*pow(10,Digit);
    Swap=Swap+(n%(int)(pow(10,Digit)));
    Swap-=Last_digit;
    Swap+=First_digit;

    printf("Digit after swap %d",Swap);
}