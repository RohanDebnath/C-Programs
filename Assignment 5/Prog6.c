// Max and min element of the array 

#include <stdio.h>
int main()
{
    int arr[20];
    int n, c=0;
    printf("Select the Number of element which you want to have in array \n");
    printf("Please Note the Maxminum Number of elements should be 20 \n");
    scanf("%d", &n);

     for (int i = 0; i < n; i++)
    {
        printf("Select the %d elemnt of the Array \n", i+1);
        scanf("%d",&arr[i]);
    }

    int i, max, min;
    max = arr[0];
    min = arr[0];


    for(i=1; i<n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}