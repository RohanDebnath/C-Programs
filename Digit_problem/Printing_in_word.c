// WAP to enter a number and print it in words
#include<stdio.h>
int main()
{
    printf("Enter your Number\n");
    int n,d,z=0;
    scanf("%d",&n);

    while (n!=0)
    {
        d=n%10;
        z=z*10+d;
        n=n/10;
    }
    while (z!=0)
    {
        switch (z%10)
        {
            case 1:
            printf("One\n");
            break;
            case 2:
            printf("Two\n");
            break;
            case 3:
            printf("Three\n");
            break;
            case 4:
            printf("Four\n");
            break;
            case 5:
            printf("Fiven\n");
            break;
            case 6:
            printf("Six\n");
            break;
            case 7:
            printf("Seven\n");
            break;
            case 8:
            printf("Eight\n");
            break;
            case 9:
            printf("Nine\n");
            break;
            case 0:
            printf("Zero\n");
        }
        z=z/10;
    } 
    
}