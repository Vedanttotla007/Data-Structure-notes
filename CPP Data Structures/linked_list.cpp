#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  struct node* next;
};

struct node* head;

void push(int val){
    node* temp = new node();
    if(!temp){
        cout<<"Stack overFlow\n";
    }
    temp->data = val;
    temp->next = head;
    head = temp;
}

int isEmpty(){
    return head == NULL;
}

int peek(){
    if(!isEmpty()){
        return head->data;
    }
}

void pop(){
    node* temp;
    if(temp == NULL){
        cout<<"Stack UnderFlow\n";
        // exit(1);
    }
    temp = head;
    head = head->next;
    free(temp);

}

void display(){
    node* ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

int main(){
    push(3);
    push(6);
    push(11);
    push(7);
    push(9);
    display();
    pop();
    cout<<"\nAfter Popping: \n";
    display();
}
