#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f; // front
    int r; // rear
    int *arr;
};

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue is full\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}

void displayQueue(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
    }
    else
    {
       // printf("Elements in the queue:\n");
        for (int i = q->f + 1; i <= q->r; i++)
        {
            printf("%d ", q->arr[i]);
        }
        printf("\n");
    }
}

int main()
{
    struct queue q;
    q.size = 100;
    q.f = 0; // Adjusting front for existing elements
    q.r = 3; // Rear pointing to the last existing element
    q.arr = (int *)malloc(q.size * sizeof(int));

    // Assigning existing elements
    q.arr[0] = 50;
    q.arr[1] = 10;
    q.arr[2] = 90;
    q.arr[3] = 55;

    printf("intial elements of the queue:\n");
    displayQueue(&q); // Display elements in the queue before enqueuing
    //printf("intial elements of the queue");
    enqueue(&q, 12);
    enqueue(&q, 15);

    printf("elements of the queue after the enqueue:\n");
    displayQueue(&q); // Display elements in the queue after enqueuing

    return 0;
}
