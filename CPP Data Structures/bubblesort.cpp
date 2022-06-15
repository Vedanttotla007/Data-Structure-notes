#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Iterative Method
// void bubbleSort(int a[], int n)
// {
//     int i, j;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n - i - 1; j++)
//         {
//             if (a[j] > a[j+1])
//             {
//                 swap(a[j], a[j+1]);
//             }
            
//         }
//     }
// }

//Recursive Method
void bubbleSort(int a[] , int n){
    if(n == 1)
       return;
    
    for(int i = 0 ; i < n-1 ; i++){
        if(a[i] > a[i+1])
             swap(a[i],a[i+1]);

    }
    bubbleSort(a , n-1);
}

int main(){
    int a[] = {6,3,11,7,9,2,1};
    int n = 7;
    for(int i = 0 ; i < n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\nSorted Array: "<<endl;
    bubbleSort(a,n);
    for(int i = 0 ; i < n ; i++){
        cout<<a[i]<<" ";
    }
}