#include<stdio.h>
#include<stdlib.h>
struct Stack
{
    int size;
    int top;
    char * arr;
};

void push(struct Stack *ptr, char val)
{
    ptr->top++;
    ptr->arr[ptr->top]=val;
}

int pop(struct Stack *ptr)
{
   int val=ptr->arr[ptr->top];
   ptr->top--;
   return val;
}

int isEmpty( struct Stack * ptr)
{
    if(ptr->top==-1)
    return 1;
}

int parenthesismatch(char * exp)
{
    struct Stack * sp;
    sp->top=-1;
    sp->size=30;
    sp->arr= (char*)malloc(sp->size * sizeof(char));

    for(int i = 0; exp[i]<='\0'; i++)
    {
        if(exp[i]='(')
        {
            push(sp,'(');
        }
        else if(exp[i]=')')
        {
            pop(sp);
        }
         
    }
    if(isEmpty(sp))
    {
        return 1;
    }
}

int main()
{
    char * exp ="(73$&(+^#)SDUF)";
    if(parenthesismatch(exp))
    {
        printf(" The parenthesis has been rightfully matched");
    } 
    else
    printf("The parenthesis has not been matched");
}