//Reverse a number using for and while both

#include<stdio.h>
void for_Loop(int num)
{
    int z,d=0;
    for (int i = num; i >0;)
    {
        z=i%10;
        d=d*10+z;
        i=i/10;

    }
    printf("Digit after reversing in For loop %d\n", d);
    
}
void while_Loop(int num)
{
    int z,d=0;
    while (num>0)
    {
        z=num%10;
        d=d*10+z;
        num=num/10;
    }
    printf("Digit after reversing using While loop %d", d);
    
}
int main()
{
    int num= 789;
    for_Loop(num);
    while_Loop(num);
    
}