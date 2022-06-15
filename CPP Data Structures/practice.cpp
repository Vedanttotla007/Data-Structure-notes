#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
    node(int data)
    {
        this->data = data;
    }
    
};

struct linkedlist
{
    node* head;
    linkedlist()
    {
        head = NULL;
    }
    void push(int data);
    void reverse();
    void display();
};

void linkedlist:: push(int data)
{
    
    node* temp = new node(data);
    // temp->dat
    temp->next=(head);
    (head)=temp;
}

void linkedlist :: reverse()
{
    node* curr = head ;
    node* next = NULL;
    node* prev = NULL;
    while(curr!= NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

void linkedlist::display()
{
    node* ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<"\n";
}

int main()
{
    // node* head = new node();
    linkedlist ll;
    ll.push(7);
    ll.push(11);
    ll.push(2);
    ll.push(4);
    ll.push(9);
    ll.display();
    ll.reverse();
    ll.display();
}