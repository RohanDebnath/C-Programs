// Wap to find a Composite Number
#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter your Number\n");
    scanf("%d",&n);
    for (int i = 2; i <n/2; i++)
    {
        if(n%i==0)
        c++;
    }
    if(c!=0)
    printf("Yes the Number %d is a composite Number",n);
    else
    printf("No it's not");
    
}