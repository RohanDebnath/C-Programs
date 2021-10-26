#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

void Printing(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d \n",ptr->data); // Value 100
        ptr=ptr->link;              //  
    }
}

int  main()
{
    struct Node *rohan,*soumik,*pritam;
    

    rohan=(struct Node *) malloc(sizeof(struct Node));
    soumik=(struct Node *) malloc(sizeof(struct Node));
    pritam=(struct Node *) malloc(sizeof(struct Node));

    rohan->data=100;
    rohan->link=soumik;

    soumik->data=90;
    soumik->link=pritam;

    pritam->data=60;
    pritam->link=NULL;
    Printing(rohan);

} 