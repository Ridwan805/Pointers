#include <stdio.h>

int main(){
    int arr[] = {1,2,5,6,3,4,7,8,9};

    int sum = 0,*p;
    int l = sizeof(arr)/sizeof(arr[0]);

    for (p = arr; p <= arr+l-1;p++){ // here we are using the array as a pointer 
    
        sum += *p;
    }

    printf("sum = %d", sum);
}