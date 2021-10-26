#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
        return 1;
    else
        return 0;
}

int isEmpty(struct queue *q)
{
    if (q->r == q->f)
        return 1;
    else
        return 0;
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
        printf("The queue if full \n");
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queue *q)
{
    int a=-1;
    if(isEmpty(q))
        printf("The queue is Empty  \n");
    else
    {
       q->f++;
       a=q->arr[q->f];
    }
    return a;
}

int main()
{
    struct queue q;
    q.size = 4;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    //enqueue few elements
 
      //enqueue few elements

    enqueue(&q, 12);
    enqueue(&q, 13);
    enqueue(&q, 14);
    enqueue(&q, 125);
      enqueue(&q, 12524);
        enqueue(&q, 125);

    printf("Dequeueing element %d\n", dequeue(&q));
    printf("Dequeueing element %d\n", dequeue(&q));
    printf("Dequeueing element %d\n", dequeue(&q));
    printf("Dequeueing element %d\n", dequeue(&q));

    if (isEmpty(&q))
    {
        printf("The queue is empty");
    }

    if (isFull(&q))
    {
        printf("Queue is full\n");
    }
}

