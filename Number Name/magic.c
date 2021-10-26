// WAP to print a Magic Number
#include<stdio.h>
int main()
{
    int n,sum=0,z;
    printf("Enter your Number\n");
    scanf("%d",&n);
    int num=n;
    while (n>0)
    {
        z=n%10;
        sum+=z;
        n/=10;
    }

    int k=sum,reverse=0;
    while(k>0)
    {
        z=k%10;
        reverse=reverse*10+z;
        k/=10;
    }
    if(reverse==sum)
    printf("The Number %d is a Magic Number\n",num);
    else
    printf("NO ");

}