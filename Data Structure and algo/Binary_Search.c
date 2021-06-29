#include<stdio.h>

int binary(int arr[], int element , int size)
{
    int low =0, mid , high = size -1;
    while(low<=high)
    {   
        mid=(high+low)/2;
        if(arr[mid]==element)
        {
            return mid;
        }
        else if(arr[mid]< element)
        {
            low = mid +1;
        }
        else
        {
            high = mid + 1;
        }
    }
}

int main()
{
    int arr[20]={1,2,3,4,5,6,7,8,9,10.11,12,23};
    int element = 6;
    int size = sizeof(arr)/ sizeof(int); 
    int ans =binary(arr, element,size);
    printf(" The Value %d was found in the index %d", element,ans);
}