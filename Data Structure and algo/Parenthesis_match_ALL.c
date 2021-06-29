#include<stdio.h>
#include<stdlib.h>
struct Stack 
{
    int size;
    int top;
    char * arr;
};
int isFull( struct Stack *ptr)
{
    if(ptr->top=ptr-> size-1)
    return 1;
}
void push(struct Stack * ptr, char val)
{
    if(isFull(ptr))
    {
        printf(" The stack is full ");
    }
        else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
        
    }
}
int isEmprty(struct Stack *ptr)
{
    if(ptr->top==-1)
    return 1;
}
int pop(struct Stack *ptr)
{
    if(isEmprty(ptr))
    {
        printf("The stack is now empty");
    }
    else{
        int val =ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int parenthesismatching ( char * exp)
{
    struct Stack * ptr;
    ptr->top=-1;
    ptr->size=15;
    ptr->arr=(char *)malloc(ptr->size*sizeof(char));
    for (int i = 0; exp[i] <='\0' ; i++)
    {
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
        {
            push(ptr,exp[i]);
        }
       else if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
        {
            pop(ptr);
        }
    }

}
int main()
{
    char * exp="{([])}";
    if(parenthesismatching(exp))
    {
        printf(" Matched");
    }
    else{
        printf("Not matched");
    }
}