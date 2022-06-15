#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node* next;
};

void Push(struct node**head , int data){
    struct node* temp = new node;
    temp->data = data;
    temp->next = (*head);
    (*head) = temp;
}

void Reverse(struct node**head){
    struct node* prev = NULL;
    struct node* temp = NULL;
    struct node* curr = (*head);
    while(curr != NULL){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    (*head) = prev;
}

void Display(struct node* head){
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }

}

int main(){
    struct node* head = NULL;
    Push(&head,10);
    Push(&head,20);
    Push(&head,40);
    Push(&head,30);
    Push(&head,50);
    Display(head);
    cout<<endl;
    Reverse(&head);
    Display(head);
}