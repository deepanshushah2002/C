#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAXSIZE 5
typedef struct
{
    int item[MAXSIZE];
    int front;
    int rear;
} queue;
int uf = 0;
void insert(queue *p, int x)
{
    p->rear = (p->rear + 1) % MAXSIZE;
    if (p->rear == p->front)
    {
        printf("Queue is overflow !\n");
    }
    else
    {
        if (p->front == -1)
            p->front += 1;
        p->item[p->rear] = x;
    }
}
void del(queue *p)
{
    if (p->front == -1 || uf == 1)
    {
        printf("Queue is underflow\n");
    }
    else
    {
        if (p->front == p->rear)
        {
            int x = p->item[p->front];
            p->front = (p->front + 1) % MAXSIZE;
            uf = 1;
        }
        else
        {
            int x = p->item[p->front];
            p->front = (p->front + 1) % MAXSIZE;
            uf = 0;
        }
    }
}
void display(queue p)
{
    if (p.front == -1 || uf == 1)
    {
        printf("Queue is underflow\n");
    }
    else
    {
        int i;
        if (p.rear > p.front)
        {
            for (i = p.front; i <= p.rear; i++)
                printf("%d ", p.item[i]);
        }
        else
        {

            for (i = p.front; i < MAXSIZE; i++)
                printf("%d ", p.item[i]);
            for (i = 0; i <= p.rear; i++)
                printf("%d", p.item[i]);
        }
    }
}
int main()
{
    queue q;
    int ch, x;
    q.front = -1;
    q.rear = -1;
    while (1)
    {
        printf("\nchoose for \n1.insert\n2.delete\n3.display\n4.exit\n: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            printf("Enter the element to insert :");
            scanf("%d", &x);
            insert(&q, x);
            break;
        }
        case 2:
        {
            del(&q);
            break;
        }
        case 3:
        {
            display(q);
            break;
        }
        case 4:
        {
            exit(0);
            break;
        }
        default:
        {
            printf("\nWrong choose\n");
        }
        }
    }
}
