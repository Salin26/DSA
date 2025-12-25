//circular queue using array
#include<bits/stdc++.h>
using namespace std;
class circularqueue
{
private:
    int front,rear,size,capacity;
    int* arr;
public:
    circularqueue(int cap)
    {
        capacity=cap;
        size=0;
        front=rear=-1;
    }
    bool isfull()
    {
        if (size==capacity)
        {
         return true;

        }
        else
        {
            return false;
        }
    }
    bool isempty()
    {
        if(size==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue(int value)
    {
        if(size==capacity)
        {
            cout<<"QUEUE is full"<<endl;
        }
        else
        {
            rear=(rear+1)%capacity;
            size++;
            arr[rear]=value;

            if(front==-1)
            {
                front=0;

            }
            cout<<"Value is enqueued"<<endl;
        }
    }
    void dequeue( )
    {
        if (size==0)
        {
            cout<<"Q is underflow"<<endl;

        }
        else
        {
            int deq_value=arr[front];
            front=(front+1)%capacity;
            size--;
            if(size==0)
            {
                front=rear=-1;
            }
            cout<<"Value is dequeued"<<endl;
        }
    }
    int peek()
    {
    if(isfull())
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
       return arr[front];

    }
    }
    void display()
    {
        if (isempty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        int i=front;
        for(int j=0;j<size;j++)
        {
            cout<<arr[i]<<endl;
            i=(i+1)%capacity;
        }
    }
};

int main()
{
    circularqueue cq(3);
    cq.dequeue();
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.dequeue();
    cq.enqueue(50);
    cq.peek();
    cq.display();



}
