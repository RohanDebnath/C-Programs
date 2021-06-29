#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void Transverse( struct Node *ptr)
{
    while(ptr!= 0 )
    {
        printf("%d\n", ptr->data);
        ptr= ptr->next;
    }
    printf("\n");
}

struct Node * insert_atfirst(struct Node * head,int value)

{
    struct Node *ptr = ( struct Node *)malloc (sizeof(struct Node));
    ptr->data= value;
    ptr->next=head;
    return ptr;
}

struct Node * insert_AtIndex(struct Node *head, int index, int value)
{
    struct Node * ptr =(struct Node *) malloc( sizeof(struct Node));
    struct Node *p=head;
    int i=0;
    while (  i != index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=value;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct Node *inser_AtEnd(struct Node *head, int value)

{
    struct Node *ptr = (struct Node *)malloc (sizeof(struct Node));
    struct Node *p = head;
    while(p->next!= NULL)
    {
        p=p->next;
    }
    ptr->data=value;
    p->next=ptr;
    ptr->next=NULL;
    return head;

}
struct Node * insert_AfterNode(struct Node *head , struct Node *previous ,int value)
{
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr ->data= value;
    ptr->next=previous->next;
    previous->next=ptr;
    return head;
}


 int main()
 {
     struct Node * head;
     struct Node * second;
     struct Node * third;
     struct Node * fourth;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    head ->data=12;
    head ->next = second;

    second ->data= 32;
    second ->next= third;

    third ->data = 34;
    third->next = fourth;

    fourth ->data = 90;
    fourth->next = NULL;
    Transverse(head);
     //head= insert_atfirst(head, 7);
    //head=insert_AtIndex(head,2,69);
   // head = inser_AtEnd(head,1);'
   head=insert_AfterNode(head,third,07);
    Transverse(head);

 }