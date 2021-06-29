//Write a program in C to display the multiplication table of a given integer.
#include<stdio.h>
int main()
{
    printf("Enter the Number whose Multiplication table u want to display\n");
    int n ; 
    scanf("%d",&n);
    for(int i = 1 ; i<=10; i++ )
    {
        printf(" %d * %d = %d\n", n, i , n*i);
    }
}