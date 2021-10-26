//WAP to add number using array
#include<stdio.h>
int main()
{
    printf("Enter your length of array\n");
    int n;
    scanf("%d",&n);
    int arr[n], sum =0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter your %d Number \n", i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    printf("the sum of all number is %d",sum);
    

}