#include<bits/stdc++.h>
using namespace std;

struct Qnode
{
    int data;
    Qnode* next;
    Qnode(int d)
    {
        data = d;
        next = NULL;
    }
};

struct Queue
{
    Qnode* rear , *front ;
    
    Queue()
    {
        front=rear=NULL;
    }

    void EnQueue(int x)
    {
        Qnode* temp = new Qnode(x);
        if(rear == NULL)
        {
            front = rear = temp;
               return;
        }
        rear->next = temp;
        rear = temp;
    } 

    void DeQueue()
    {
       if(front == NULL)
          return;
       Qnode* temp = front;
       front = front->next;
       if(front  == NULL)
         rear = NULL;
       delete(temp);
    }

    void print()
    {
        Qnode* ptr = front;
        while(ptr != NULL)
        {
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
        cout<<"\n";
    }
};

int main()
{
    Queue q;
    q.EnQueue(87);
    q.EnQueue(87);
    q.EnQueue(87);
    q.EnQueue(87);
    q.EnQueue(87);
    q.EnQueue(87);
    q.EnQueue(87);
    q.print();
    q.DeQueue();
    q.print();
}