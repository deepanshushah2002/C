#include<stdio.h>
#include<conio.h>
#define MAX 50
// typedef
// {
//     int item {MAXSIZE};
//     int front;
//     int rear;
// }
// queue;
void insert ();
void delete();
void display();
int rear=-1;
int front=-1;
int queue_array[MAX];
void main();
{
    while(1)
    {
        printf("Enter 1 for insret\nEnter 2 for delete\nEnter 3 for display\n4 Exit");
        scanf("%d",&choice);
        if(choice==1)
        insert();
        else if (choice==2)
            delete();
        else if (choice==3)
            display();
        else
        printf("Invalide choice");
        void insert()
        int item;
        if (rear==MAX-1)
        printf("Queue overflow\n");
        else
        {
            if(front==-1)
            front=0;
            printf("Enter element which is insert");
            scanf("%d",%item);
            rear=rear=+1;
            queue_array[front];
            front=front=+1;
        }
    }
    int deletion()
    {
        int x;
        if(front==-1||front>rear)
        printf("queue underflow");
        else
        {
            printf("Element delete from queue is \n",%d);
            queue_array[]
            front=front+1;
            void display()
            int i;
            if(front==-1)
            printf("queue is empty");
            else
            {
                printf("queue is :");
                for(i=front;i<=rear;i++)
                printf("%d",queue_array[i]);
            }
        }
    }
}