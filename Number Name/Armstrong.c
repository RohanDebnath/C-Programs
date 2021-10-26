//Write a C program to check whether a number is Armstrong number or not
#include<stdio.h>
#include<math.h>
int main()
{
    printf("Enter your  Number\n");
    int num,d,digit ,z=0;
    scanf("%d",&num);
    d=(int)log10(num);
    int len=d+1;
    int origina_num=num;
    while (num>0)
    {
        digit=num%10;
        z=z+pow(digit,len);
        num=num/10;
    }

    if(z==origina_num)
    printf("Yes It is Armstrong Number");
    else
    printf("Not ");
}