/*BUG*/

#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data ;
    struct Node * next;
};

void Traversal ( struct Node * head)
{
    struct Node * ptr = head;
   do{
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);

    printf("chala \n");
}

struct Node *insert(struct Node * head, int value)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head->next;
   ptr->data=value;
    while (p->next != head)
    {
        p=p->next;
    }
    
    p->next=ptr;
    ptr->next=head;
    head =ptr;
    return (head);

}
    

int main()
{
    struct Node *head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = (struct Node *) malloc(sizeof(struct Node));
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
   printf("aya\n");
    Traversal(head);
    printf("Wapas aya");
    head = insert(head,80);
    Traversal(head);
}
