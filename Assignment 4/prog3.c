// Write a program in C to display the n terms of odd natural number and their sum
#include<stdio.h>
int main()
{
    printf("Enter the N term\n");
    int n , sum = 0,i =1;
    scanf("%d",&n);
     for(i=1;i<=n;i++)
   {
     printf("%d \n",2*i-1);
     sum+=2*i-1;
   }
    printf(" The sum of them is %d", sum);
    return 0 ;
}