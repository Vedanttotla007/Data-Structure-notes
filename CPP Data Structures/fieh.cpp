#include<iostream>
using namespace std;

void swap(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b  = temp;
}

int partition(int a[] , int l , int h){
    int pivot = a[h];
    int i = l - 1;
    for(int j = l ; j <= h-1 ; j++){
        if(a[j] < pivot){
            i++;
            swap(&a[j] , &a[i]);
        }
    }
    swap(&a[i+1],&a[h]);
    return (i+1);
}

void quickSort(int a[] , int l , int h){
    if(l < h){
        int pi = partition(a,l,h);
        quickSort(a,l,pi-1);
        quickSort(a,pi+1,h);
    }
}

void print(int a[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[] = {6,33,41,56,99,12,78};
    int n = sizeof(a)/sizeof(a[0]);
    print(a,n);
    cout<<endl;
    quickSort(a,0,n-1);
    print(a,n);
    
}