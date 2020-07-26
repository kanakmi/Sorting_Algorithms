#include <iostream>
using namespace std;

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int quick(int a[], int st, int en){
    int pivot = a[en];
    int i, s=st;
    for(i=st; i<en; i++){
        if(a[i]<=pivot){
            swap(&a[i], &a[s]);
            s++;
        }
    }
    swap(&a[s], &a[en]);
    return s;
}

void quicksort(int a[], int st, int en){
    if(st < en){
        int mid = quick(a, st, en);
        quicksort(a, st, mid-1);
        quicksort(a, mid+1, en);
    }
}

int main(){
    int n;
    cin >> n;
    int i, a[n];
    for(i=0; i<n; i++) cin>>a[i];
    quicksort(a, 0, n-1);
    for(i=0; i<n; i++) cout<<a[i]<<' ';
    return 0;
}