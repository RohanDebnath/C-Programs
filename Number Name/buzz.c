// Wap to find BUZZ
#include<stdio.h>
int main()
{
    printf("Enter your number \n");
    int n;
    scanf("%d",&n);
    if(n%7==0 || n%10==7)
    {
        printf("yes it's a BUZZ number");
    }
}