//swaping two number without using temprary veriables
#include<stdio.h>

void swap(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;

    printf("After Swap %d %d", a,b);
}
int main()
{
    int a=10,b=80;
    printf("Before swap %d %d\n", a,b);
    swap(a,b);
}