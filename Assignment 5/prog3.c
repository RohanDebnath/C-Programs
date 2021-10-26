// Coping the elememt of one Array into another

#include<stdio.h>

void display(int arr[], int n)
{   
    printf("The elements of your Array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    
}
int main()
{
    int arr1[20];
    int arr2[20];
    int n;
    printf("Select the Number of element which you want to have in array \n");
    printf("Please Note the Maxminum Number of elements should be 20 \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Select the %d elemnt of the Array \n", i+1);
        scanf("%d",&arr1[i]);
    }
    printf("\n Displaying the element of 1st array ");
    display(arr1,n);

    // Now coping here 

    for (int i = 0; i < n; i++)
    {
        arr2[i]=arr1[i];
    }

    //displaying arr2

    printf("\nNow displaying the second array ");

    display(arr2,n);
    

}