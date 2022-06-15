#include<iostream>
using namespace std;

void insertionSort(int a[] , int n){
    int i , key , j;
    for(i = 1 ; i < n ; i++){
          key = a[i];
          j = i-1;
          while(a[j] > key && j >= 0){
              a[j+1] = a[j];
              j = j-1;
          }
          a[j+1] = key;
    }
}

int main(){
    int a[] = {9,3,12,5,23,11};
    int n = 6 ;
    for(int i  = 0 ; i < n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\nSorted Array: "<<endl;
    insertionSort(a,n);
    for(int i  = 0 ; i < n ; i++){
        cout<<a[i]<<" ";
    }
}