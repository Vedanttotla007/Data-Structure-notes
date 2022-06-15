#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

struct node* head = NULL;

void insert(int val)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    head = temp;
}

void Delete(int n)
{
   struct node* temp1 = head;
   if(n==1)
   {
       head = temp1->next;
       free(temp1);
   }
   for(int i = 0 ; i < n-2 ; i++)
   {
      temp1 = temp1->next;
   }
   struct node* temp2 = temp1->next;
   temp1->next = temp2->next;
   free(temp2);
   return;
}

void print()
{
    struct node* ptr = head;
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

int main()
{
    insert(5); 
    insert(51); 
    insert(25); 
    insert(75); 
    insert(58);
    print();
    Delete(3);
    print();
}