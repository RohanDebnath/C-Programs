//Reversing the array
#include<stdio.h>
int main()
{
    int arr[20], n;
    printf("Select the Number of element which you want to have in array \n");
    printf("Please Note the Maxminum Number of elements should be 20 \n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Select the %d elemnt of the Array \n", i+1);
        scanf("%d",&arr[i]);
    }

    printf("Your Array After reversing\n");
    for (int i = n-1; i >=0; i--)
    {
        printf("%d\t",arr[i]);
    }
    

}