#include<stdio.h>
#include<conio.h>
void display(int arr[],int size)
{
    for(int i =0; i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int insertion(int arr[],int size, int element,int index, int capacity)
{
    if(size>capacity)
    return -1;

    for(int i = size-1;i>index;i--)
    {
        arr[i+1]=arr[i];
    }

    arr[index]=element;
    return 1;
}
int main()
{
    int arr[20]={1,2,3,4,5};
    int size =5, element = 69; 
    int index =2;
    display(arr,size);
    insertion(arr,size,element,index,20);
    size++;
    display(arr,size);
    return 0;
    getch();


}