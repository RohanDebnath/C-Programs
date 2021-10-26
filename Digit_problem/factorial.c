// Use fact() to calculate factorial

#include<stdio.h>
int fact(int n)
{
    int factorial=1;
    for (int i = 1; i <=n; i++)
    {
        factorial= factorial*i;
    }
    return factorial;

}
int main()
{
    printf("Enter the number whose factorial you want to calculate\n");
    int n;
    scanf("%d",&n);
    printf("The factorial of %d is %ld ", n , fact(n));
}