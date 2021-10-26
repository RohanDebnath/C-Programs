
void enqueue( int val)
{
    struct Node *n=(struct Node *)malloc (sizeof(struct Node));
    if(n==NULL)
    {
        printf("Queuue if full");
    }
    else
    {
        n->data=val;
        n->next=NULL;
        if(f==NULL)
        {
            f=r=n;
        }
        else
        {
            r->next=NULL;
            r=n;
        }
    }
}
