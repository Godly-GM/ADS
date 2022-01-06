#include<stdio.h>
void enqueue();
void dequeue();
void display();
int rear=-1;
int front=-1;
int queue[100],n;

void main()
{
    int ch;
    printf("Enter the Limit of Circular Queue Queue: ");
    scanf("%d",&n);
    do
    {
        printf("\n\tQUEUE OPERATIONS\n");
        printf("\n\t1-Enqueue\n\t2-Dequeue\n\t3-Display\n\t4-Exit\n\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(1);
            default:
                printf("Invalid choice\n");
                break;
        }
    }
while(ch<4);
}


void enqueue()
{
    int item;
    if(rear==n-1)
    {
        printf("\nQUEUE FULL\n");
    }
    else
    {
        if (front == - 1)
        {
            front = 0;
        }
        printf("Insert the element in queue : ");
        scanf("%d", &item);
        rear = (rear + 1)%n;
        queue[rear] = item;
        printf("Element inserted in the circular queue successfully\n");

    }

}


void dequeue()
{
if(front==-1||front>rear)
    {
        printf("\nQUEUE IS EMPTY\n");
    }
    else
    {

        printf("Element deleted is %d\t",queue[front]);
        if(front==rear)
           {
               printf("only one element left and it deletd");
               front=-1;
               rear=-1;
           }
        else{
            front=(front+1)%n;
            printf("\nElement deleted");
        }

    }
}
void display()
{
    int i;
    if(front==-1||front>rear)
    {
        printf("\nQUEUE IS EMPTY\n");
    }
    else
    {
        printf("The elements in the queue is :");
        for(i=front;i<=rear;i++)
            {
                printf("%d\t",queue[i]);
            }
    }
}
