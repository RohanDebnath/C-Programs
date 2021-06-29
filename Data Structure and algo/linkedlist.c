#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data ;
    struct node *next;

};
void Traversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
    printf("%d\n", ptr->data);
    ptr=ptr->next;
}
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *) malloc (sizeof(struct Node));
    second = (struct Node *) malloc (sizeof(struct Node));
    third = (struct Node *) malloc (sizeof(struct Node));


    head->data= 70;
    head ->next = second;

    second->data=80;
    second->next = third;

    third->data=69;
    third->next=NULL;

    Traversal(head);
    return 0;
}