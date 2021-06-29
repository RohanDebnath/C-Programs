// number game
#include<stdio.h>
int main()
{
    int m; 
    printf("Enter your given number\n");
    scanf("%d",&m);
    if(m>0)
    {
        printf("1");
    }
    else if(m ==0)
    {
        printf("0");

    }
    else
    {
        printf("-1");
    }
}