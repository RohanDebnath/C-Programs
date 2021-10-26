
#include <stdio.h>
int main()
{
    int n, c;
    printf("Enter your range : ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        c = 0;
        for (int j = 1; j <= i; j++)
            if (i % j == 0)
                c++;
        if (c == 2)
            printf("%d\tPrime\n", i);
        else
            printf("%d\tNot Prime\n", i);
    }
    return 0;
}