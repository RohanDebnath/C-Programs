//swaping two number using temprary veriables
#include<stdio.h>
void swap(int a , int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Ater swap %d %d", a, b);
}

int main()
{
    int a=4,b=5;
    printf("Before swap using temprar variable %d %d\n", a,b);
    swap(a,b);
}