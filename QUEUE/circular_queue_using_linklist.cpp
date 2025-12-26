#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

// Enqueue
void enqueue(int val)
{
    Node* newNode = new Node();
    newNode->data = val;

    if(front == NULL)   // Empty queue
    {
        front = rear = newNode;
        rear->next = front;   // Circular
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
        rear->next = front;   // Maintain circular link
    }
}

// Dequeue
void dequeue()
{
    if(front == NULL)
    {
        cout << "Queue is Empty\n";
        return;
    }

    if(front == rear)   // Only one element
    {
        delete front;
        front = rear = NULL;
    }
    else
    {
        Node* temp = front;
        front = front->next;
        rear->next = front;
        delete temp;
    }
}

// Display
void display()
{
    if(front == NULL)
    {
        cout << "Queue is Empty\n";
        return;
    }

    Node* temp = front;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    while(temp != front);

    cout << endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    cout << "Queue: ";
    display();

    dequeue();
    cout << "After Dequeue: ";
    display();

    dequeue();
    cout << "After Dequeue: ";
    display();

    return 0;
}
