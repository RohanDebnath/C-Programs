//Write a program in C to display the n terms of harmonic series and their sum.
#include<stdio.h>
int main()
{
    int n;
    float sum=0.0;
    printf("Enter the Number of terms you want\n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        printf("1/%d +",i);
    }

    for (int i = 1; i <=n; i++)
    {
        sum=sum+(1/(float)i);
    }
    printf("\nThe sum is %0.2lf",sum);
}