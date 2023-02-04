#include <stdio.h>
#define size 5;
int arr[size];
int front = -1;
int rear = -1;
int isFull()
{
    if ((front == rear + 1) || (front == 0 && rear == size - 1))
    {
        return 1;
    }
    else
        return 0;
}
int isEmpty()
{
    if (front == -1)
    {
        return 1;
    }
    return 0;
}
void enqueue(int n)
{
    if (isFull())
    {
        printf("overflow\n");
    }
    if (front == -1)
    {
        front = 0;
    }
    rear = (rear + 1) % size;
    arr[rear] = n;
}
int dequeue()
{
    int n;
    if (isEmpty())
    {
        printf("queue is empty\n");
    }
    else
    {
        n = arr[front];
        if (rear == front)
        {
            front = -1;
            rear = -1;
        }
        else {
            front = (front +1) % size;

        }
    }
}
