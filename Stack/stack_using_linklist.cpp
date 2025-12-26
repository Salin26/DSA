//stack implementation linklist
#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int element;
    node* next;

    node(int value) {
        element = value;
        next = nullptr;
    }

};
class stackll
{
private:
   node* top;

public:

    stackll()
    {
        top=nullptr;
    }
    bool isempty()
    {
        if(top==nullptr)
        {
            return false;
        }
        else
        {
            return true;

        }
    }
    void push(int value)

    {
        node* n=new node(value);
        n->next=top;
        top=n;


    }
    void pop()
  {

    if(top==nullptr)
    {
        cout<<"stack underflow"<<endl;
    }
    else
    {
      node* temp=top;
      temp=  top->next;

         cout<<"value is popped"<<temp->element<<endl;
         delete temp;
    }
}
    int peek()
    {
        if(isempty())
        {
            return -1;
        }
        else
        {
            return top->element;
        }
    }
    void display()
    {
        if(isempty())
        {
            cout<<"underflow"<<endl;
        }
        else
       {

        node* temp=top;
        while(temp!=nullptr)
        {

            cout<<temp->element<<endl;
            temp=temp->next;
        }
    }

    }
};
int main()
{
    stackll s;
    s.push(6);
    s.display();
}
