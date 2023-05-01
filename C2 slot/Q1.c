#include <stdio.h>


int count = 0;

int divide(int arr[], int n){
    if(n==1){
        return 0;
    }

    count++;

    int x = n/2, i;
    int left[n/2];
    for(i=0; i<x; i++){
        left[i] = arr[i];
    }
    divide(left, x);
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    divide(arr, n);

    printf("%d", count);

    return 0;
}

