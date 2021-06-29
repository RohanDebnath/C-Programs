#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data;
    struct Node *next;
};

void Traversal(struct Node *ptr)
{
    while(ptr!= NULL)
    {
        printf(" %d\n", ptr->data);
       ptr= ptr ->next;
    }
}

int isEmpty(struct Node *top)
{
    if(top==NULL)
    return 1;
}

int isFull(struct Node* top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
struct Node* push(struct Node* top, int x){
    if(isFull(top)){
        printf("Stack Overflow\n");
    }
    else{
        struct Node* n = (struct Node*) malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int main()
{
    struct Node *top =NULL;
    top=push(top,59);
    top=push(top,34);
    top=push(top,44);
    top=push(top,5);
    top=push(top,9);
    Traversal(top);
}