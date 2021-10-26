#include<stdio.h>
void pallendrome(int num)
{
    int z=0,d;
    int original_num=num;
    while (num>0)
    {
        d=num%10;
        z=z*10+d;
        num=num/10;
    }
    if(z==original_num)
    printf("Yes the number is pallendrome");
}

int main()
{
    printf("Enter your number \n");
    int num;
    scanf("%d",&num);
    pallendrome(num);
}