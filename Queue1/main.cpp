#include <iostream>
using namespace std;
#define SIZE 5

int N[SIZE];
int front = -1;
int rear = -1;

bool isempty()
{
    if
        (front == -1&&rear == -1)
        return true;
    else
        return false;
}

void enqueue (int value)
{
    if
        (rear == SIZE-1)
        cout<<"QUEUE IS FULL\N";
    else
    {
        if(rear== -1) //1st element inserted
        front =0;
        rear ++;
        N[rear]=value; //inserted in rear

    }
}

void dequeue ()
{
    if
        (isempty())
        cout<<"QUEUE IS EMPTY\N";
    else
        if(front == rear)
        front= rear= -1;
    else
        front++;
}

void showfront()
{
    if(isempty())
        cout<<"QUEUE IS EMPTY\N";
    else
        cout<<"ELEMENT AT FRONT IS:"<<N[front];

}

void displayQueue()
{
    if(isempty())
        cout<<"queue is empty\n";
    else
    {
        for(int i=front ; i<=rear; i++ )
            cout<<N[i]<<" ";
    }
}

int main()
{
    enqueue(3);
    enqueue(4);

    displayQueue();

    dequeue();
    showfront();

    return 0;
}








