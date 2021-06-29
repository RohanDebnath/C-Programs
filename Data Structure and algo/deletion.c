#include<stdio.h>
#include<conio.h>
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int deletion(int arr[],int size,int index)
{
    for (int i = index; i < size; i++)
    {
        arr[i]=arr[i+1];
    }
    return 1;
}
int main()
{
    int arr[20]={1,2,3,4,5,6,7,8,9};
    int size = 9, index = 2;
    display(arr,size);
    deletion(arr,size,index);
    size--;
    display(arr,size);
    return 0;
    getch();
}