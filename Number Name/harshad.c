// Wap to find the Harshad Number
#include<stdio.h>
int main()
{
    int n,z,sum=0;
    printf("Please Enter your Number\n");
    scanf("%d",&n);
 int k=n;
    while (n>0)
    {
        z=n%10;
        sum+=z;
        n/=10;
    }
    if(k%sum==0)
    printf("Yes the number %d is a Harshad Number\n",k);
    else
    printf("Nahi vomro");

}