// To find the HCF of two number 
#include<stdio.h>
int main()
{
    int a,b,i,HCF;
    printf("Enter Your 1st number \n");
    scanf("%d",&a);
    printf("Enter your second Number\n");
    scanf("%d",&b);
    
    for(i=1; i<=a || i<=b; i++)
    {
        if(a%i==0 && b%i==0)
        {
            HCF=i;
        }
    }
    printf("The HCF of %d and %d is %d",a,b,HCF);

}