#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
       int f , r ;
       unsigned capacity;
       int *array;
};

int size = 0;

Queue* q = new Queue();

bool empty(){
    return (size == 0);
}

bool full(){
    return (size == q->capacity);
}

void CreateQueue(unsigned cap){
    q->capacity = cap;
    q->f = size = 0;
    q->r = q->capacity - 1;
    q->array = new int(q->capacity);
}

void Enqueue(int data){
    if(full())
         return;
    q->r = (q->r+1)%(q->capacity);
    q->array[q->r] = data;
    size++;
}

void Dequeue(){
    if(empty())
         return;
    q->f = (q->f+1)%(q->capacity);
    size--;
    int val = q->array[q->f];
    cout<<val<<" element dequeued.\n";
}

void front(){
    cout<<q->array[q->f]<<"\n";
}

void rear(){
    cout<<q->array[q->r]<<"\n";
}

void print(){
    for(int i = 0 ; i < size ; i++){
        cout<<q->array[i]<<" ";
    }
    cout<<endl;
}

int main(){
    CreateQueue(10);
    Enqueue(65);
    Enqueue(23);
    Enqueue(41);
    Enqueue(79);
    Enqueue(34);
    print();
    front();
    rear();
    Dequeue();
}