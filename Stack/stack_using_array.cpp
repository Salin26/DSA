//stack implementation array
#include<bits/stdc++.h>

using namespace std;

 class stackarray
 {
 private:
    int top,capacity;
    int* arr;
 public:
    stackarray(int size)
    {
        capacity=size;
        top=-1;
        arr=new int[capacity];

    }
    bool isfull( )
    {
        if(top==capacity-1)
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
        if(top==-1)
        {

            return true;
        }
        else
        {

            return false;
        }

    }
    void push(int value)
    {
        if(isfull())
        {
            cout<<"stackoverflow"<<endl;
        }
        else
        {
            top++;
            arr[top]=value;
        }

    }
    void pop()
    {
        if(isempty())
        {
            cout<<"stack underflow"<<endl;
        }
        else
        {
            int popped_value=arr[top];
            top--;
            cout<<"popped value is popped"<<endl;
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
            arr[top];
        }
    }
    void display()
    {

      for(int i=top;i>=0;i--)
      {
          cout<<arr[i]<<endl;
      }

    }
 };

int main()
{
    stackarray s(10);
    s.push(10);
    s.display();

}
