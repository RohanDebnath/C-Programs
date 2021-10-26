// WAP to print the first and last digit
#include<stdio.h>
#include<math.h>
int main()
{
    printf("Enter your Number \n");
    int n;
    scanf("%d",&n);

    int First_digit , digit , Last_digit;

    Last_digit=n%10;
    digit=(int) log10(n);
    First_digit = (int) (n/pow(10,digit));

    printf("The last digit is %d \n", Last_digit);
    printf("The first digit is %d \n",First_digit);

}