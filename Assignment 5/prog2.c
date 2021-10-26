//Sum of elements of the array

#include<stdio.h>
int main()
{
    int arr[20];
    int n, sum =0;
    printf("Select the Number of element which you want to have in array \n");
    printf("Please Note the Maxminum Number of elements should be 20 \n");
    scanf("%d",&n);

     for (int i = 0; i < n; i++)
    {
        printf("Select the %d elemnt of the Array \n", i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = n-1; i >=0; i--)
    {
        sum = sum + arr[i];
    }
    printf("The Sum of all the elements of the Array is %d", sum);
}