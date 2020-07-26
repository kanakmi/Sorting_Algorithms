#include <stdio.h>
#include <malloc.h>
int main(){
    int n, i, j, p=0;
    scanf("%d", &n); //length of array

    int *a = (int*)malloc(n*sizeof(int)); //initial array of size n
    int *res = (int*)malloc(n*sizeof(int)); //resultant array of size n
    
    int count[100]={0}; //to store count of all values
    
    for(i=0; i<n; i++){
        scanf("%d", &a[i]); //inputting ith value in array
        count[a[i]-1]++;    //incrementing the count of each value encountered
    }
    
    for(i=0; i<100; i++){
        while(count[i]>0){ //if count of a value>0, it will get stored in res array till count not 0
            res[p] = i+1;
            p++;
            count[i]--;
        }
    }

    for(i=0; i<n; i++){
        printf("%d ", res[i]);
    }
       
    return 0;
}