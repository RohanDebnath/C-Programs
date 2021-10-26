// To check a number is automorphic or not.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,length,sq_n;
    printf("Please Enter your number\n");
    scanf("%d",&n);
    length=(int)log10(n);
    length++;
    int Mod_val=pow(10,length);
    sq_n=n*n;

    if((sq_n%Mod_val)==n)
    {
        printf("The number %d is Automorphic Number",n);
    }
    else
    {
        printf("No its not");
    }
}