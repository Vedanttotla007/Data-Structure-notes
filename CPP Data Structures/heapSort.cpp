#include<iostream>
using namespace std;

void swap(int *a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int a[] , int n , int i){
    int large = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if(l<n && a[l]>a[large])
         large = l;

    if(r<n && a[r]>a[large])
         large = r;

    if(large != i){
        swap(a[i],a[large]);
        heapify(a,n,large);
    }
}

void heapSort(int a[] , int n){
    for(int i = n/2 - 1 ; i >= 0 ; i--)
        heapify(a,n,i);

    for(int i = n-1 ; i > 0 ; i--){
        swap(a[i] , a[0]);
        heapify(a,i,0);
    }
}

void print(int a[] , int n){
    for(int i = 0 ; i< n ; i++){
        cout<<a[i] << " ";
    }
    cout<<"\n";
}

int main(){
    int a[] = {6,22,1,3,8,21,45,71,68,59,93};
    int n = sizeof(a)/sizeof(a[0]);
    print(a,n);
    heapSort(a,n);
    print(a,n);
}