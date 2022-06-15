#include<bits/stdc++.h>
using namespace std;

struct Queue
{
    stack<int>s1,s2;

    void EnQueue(int data)
    {
        s1.push(data);
    }

    void DeQueue()
    {
        if(s1.empty() && s2.empty())
        {
            cout<<"Queue is Empty.\n";
            exit(0);
        }
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x = s2.top();
        s2.pop();
        // return x;
    }

    void Display()
    {
        int n = s1.size();
        
        for(int i = 0 ; i < n ; i++)
        {
            cout<<s1.top()<<" ";
            s1.pop();
        }
        cout<<endl;
    }

     
};

int main()
{
    Queue q;
    q.EnQueue(6);
    q.EnQueue(3);
    q.EnQueue(9);
    q.EnQueue(16);
    q.EnQueue(27);
    q.EnQueue(33);
    //q.Display();
    q.DeQueue();
    // q.Display();
}