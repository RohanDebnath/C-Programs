// Write a program in C to display the cube of the number upto given an integer.
#include<stdio.h>
int main()
{
    printf("Enter the term upto which the cube has to be calculated\n");
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("The cube of %d is %d \n",i,i*i*i);
    }
    
}