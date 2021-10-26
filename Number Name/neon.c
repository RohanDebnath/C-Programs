//WAP to check if a number is neon or not
#include<stdio.h>
int main()
{
    int n,z,sum=0;
    printf("Please Enter your number\n");
    scanf("%d",&n);

    int sq=n*n;
    while (sq>0)
    {
        z=sq%10;
        sum=sum+z;
        sq/=10;
    }
    if(sum==n)
    {
        printf("The  number is neon");
    }
    
}