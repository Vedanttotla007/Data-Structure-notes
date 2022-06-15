#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int maximum(int *a , int n){
    int max = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(max < a[i]){
            max = a[i];
        }

    }
    return max;
}

void countSort(int *a , int n){
    int max = maximum(a,n);
    int *count = (int *)malloc((max+1)*(sizeof(int)));
    int i,j;
    for(i = 0 ; i < max + 1 ; i++){
        count[i] = 0;
    }
    for(i = 0; i < n ; i++){
        count[a[i]] = count[a[i]] + 1;
    }
    i =0 ;
    j = 0;
    while(i <= max){
        if(count[i]>0){
            a[j] = i;
            count[i] = count[i] - 1;
            j++;
        }else{
            i++;
        }
    }
}

void print(int a[] , int n){
    for(int i = 0 ; i < n ; i++){
        printf(" %d ",a[i]);
    }
    printf("\n");
}

int main(){
    int a[] = {9,2,11,33,5,8,56,71,38,47};
    int n = sizeof(a)/sizeof(a[0]);
    print(a,n);
    countSort(a,n);
    print(a,n);
}