#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int top;
    int size; 
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
    return 0;  // ask sir regarding the full
}
int isFull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else      // ask sir about this why ?
    return 0;
}

void push( struct stack *ptr,int value)
{
    if(isFull(ptr))
    {
        printf("The stack is already filled\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}
int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("The stack is Empty cannot pop item\n");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }

}

int peek( struct stack *sp, int i)
{
    int ArrayInd= sp->top-i+1;
    if(ArrayInd < 0)
    {
        printf("Not a valid position");
        return -1;
    }
    else
    {
        return sp->arr[ArrayInd];
    }
}


int main()
{
    struct stack *sp = ( struct stack *) malloc(sizeof(struct stack));
    sp->top=-1;
    sp->size=10;
    sp->arr=(int *) malloc(sp->size *sizeof( int));
    printf("The stack was succesfully created\n");
    printf("Before pushing , Full %d\n",isFull(sp));
    printf("Beore pushing, Emphy : %d\n ", isEmpty(sp));

    push(sp,10);
    push(sp,20);
    push(sp,30);
    push(sp,40);
    push(sp,50);
    push(sp,60);
    push(sp,70);
    push(sp,80);
    push(sp,90);
    push(sp,100);
    printf("After pushing , Full %d",isFull(sp));
    
    for(int j = 1; j<= sp->top+1;j++)
    {
        printf(" The value at position %d is %d\n", j ,peek(sp,j));
    }

}