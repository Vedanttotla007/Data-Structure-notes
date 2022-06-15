#include<iostream>
using namespace std;

struct node{
   int data;
   struct node* next;

};

struct node* InsertEmpty(struct node* last , int val){
    if(last!=NULL)
       return last;
    struct node* temp = new node;
    temp->data = val;
    temp->next = last;
    last = temp;
    last->next = last;
    return last;
}

struct node* InsertFirst(struct node* last , int val){
    if(last == NULL)
      return InsertEmpty(last , val);
    
    struct node* temp = new node;
    temp->data = val;
    temp->next = last->next;
    last->next = temp;
    return last;
}

struct node* Insertend(struct node* last , int val){
    if(last == NULL)
      return InsertEmpty(last , val);
    
    struct node* temp = new node;
    temp->data = val;
    temp->next = last->next;
    last->next = temp;
    last = temp;
    return last;
}

void Traversal(struct node* last){
    struct node* p = last;
     if (last == NULL) {
      cout << "Circular linked List is empty." << endl;
      return;
      }
    p = last->next;
    do{
        cout<<p->data<<" ";
        p = p->next;

    }while(p!= last->next);
    if(p == last->next){
        cout<<p->data<<" ";
       
    }
}

int main(){
    struct node*last = NULL;
    last = InsertEmpty(last , 45);
    last = InsertFirst(last , 31);
    last = InsertFirst(last , 12);
    last = InsertFirst(last , 131);
    last = Insertend(last , 361);
    Traversal(last);
}