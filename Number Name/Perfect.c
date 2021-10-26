//WAP to check Perfect Number
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter your number\n");
    scanf("%d",&n);

    for (int  i = 1; i <n; i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum==n)
    printf("The Number is Perfect Number ");
    else
    printf("No the number is not perfect Number");
}