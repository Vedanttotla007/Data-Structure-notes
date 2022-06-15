#include<iostream>
using namespace std;

void merge(int a[] , int l , int m , int r){
    int i , j , k;
    int nl = m - l + 1;
    int nr = r - m;
    int larr[nl] , rarr[nr];
    for(i = 0 ; i < nl ; i++){
        larr[i] = a[l+i];
    }
    for(j=0; j < nr ; j++){
        rarr[j] = a[m+1+j];
    }
    i = 0 , j = 0 , k = l;
    while(i<nl && j<nr){
        if(larr[i]<=rarr[j]){
            a[k] = larr[i];
            i++;
        }
        else{
            a[k] = rarr[j];
            j++;
        }
        k++;
    }
    
    while(i < nl){
        a[k] = larr[i];
        k++;i++;
    }
    while(j  < nr){
        a[k] = rarr[j];
        j++;k++;
    }

}

void MergeSort(int a[] , int l , int r){
    int m;
    if(l < r){
        m = l + (r - l)/2;
        MergeSort(a , l , m);
        MergeSort(a , m+1 , r);
        merge(a,l,m,r);
    }
}

void display(int a[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[] = {7,22,31,17,47,55,81};
    int n = 7;
    cout<<"Unsorted Array: \n";
    display(a,n);
    cout<<"\nAfter MergeSort: \n";
    MergeSort(a,0,n-1);
    display(a,n);
}