#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;

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

struct Node * delete_AtFirest(struct  Node *  head)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node)); 
    head = head->next;      // Rember the loophole about that memory
    free(ptr);
    return head;
}

struct Node * delete_AtIndex(struct  Node * head, int index)
{
    struct Node *p = head ;
    struct Node *q = head ->next;

    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;

    }
    p->next = q->next;
    free(q);
    return head;

}

struct Node * delete_AtEnd(struct Node *head)
{
    struct Node *p = head;
    struct Node *q= head ->next;
    while(q->next != NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next= NULL;
    free(q);
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
   // head=delete_AtFirest(head);
  // head = delete_AtIndex(head,2);
  head = delete_AtEnd(head);
    Transverse(head);

 }