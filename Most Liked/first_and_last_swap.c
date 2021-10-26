//Write C program to swap first and last digit of a number
#include<stdio.h>
#include<math.h>
int main()
{
    printf("Enter your Number \n");
    int num,first_digit,last_digit,digit,swap_digit;
    scanf("%d",&num);

    last_digit= num%10;
    digit= (int) log10(num);
    first_digit=(int)(num/ pow(10,digit));

    swap_digit=last_digit*(pow(10,digit));
    swap_digit=swap_digit + (num %(int) (pow(10,digit)));
    swap_digit-=last_digit;
    swap_digit+=first_digit;
    
    printf("%d", swap_digit);



}