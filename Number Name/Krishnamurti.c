//WAp to find the Krishnamurti number
#include<stdio.h>
int main()
{
    int n,z,sum=0;
    printf("Enter your number\n");
    scanf("%d",&n);
    int key=n;
    while (n>0)
    {
        int fact=1;
        z=n%10;
        for (int i = 1; i <=z; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n/=10;

    }   
    if(sum==key)
    printf("Yes the Number %d is Krishnamurti Number",key);
    else
    printf("No");    
}