#include <stdio.h>
#include <stdlib.h>
struct Circularqueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct Circularqueue *q)
{
    if ((q->r + 1) % (q->size) == q->f)
        return 1;
    else
        return 0;
}

int isEmpty(struct Circularqueue *q)
{
    if (q->r == q->f)
        return 1;
    else
        return 0;
}

void enqueue(struct Circularqueue *q, int val)
{
    if (isFull(q))
        printf("The queue if full \n");
    else
    {
        printf("The Enqued Element %d\n",val);
        q->r = (q->r + 1) % (q->size);
        q->arr[q->r] = val;
    }
}

int dequeue(struct Circularqueue *q)
{
    int a = -1;
    if (isEmpty(q))
        printf("The queue is Empty  \n");
    else
    {
        q->f = (q->f + 1) % (q->size);
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct Circularqueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    //enqueue few elements

    enqueue(&q, 12);
    enqueue(&q, 13);
    enqueue(&q, 14);
  //  enqueue(&q, 125);
  /* Get the notes which says space is reserved for 0*/

    printf("Dequeueing element %d\n", dequeue(&q));
    printf("Dequeueing element %d\n", dequeue(&q));
    printf("Dequeueing element %d\n", dequeue(&q));
   // printf("Dequeueing element %d\n", dequeue(&q));

    if (isEmpty(&q))
    {
        printf("The queue is empty");
    }

    if (isFull(&q))
    {
        printf("Queue is full\n");
    }
}