#include <stdio.h>

int main(){

    //reversing an array.
    
    int arr[6] = {5,6,4,9,8,7};
    int len = (sizeof(arr)/sizeof(arr[0]));
    int *left = arr;
    int *right = &arr[(len)-1];
    
    int arrrev[6]={};

    for (int i = len-1; i >=0; i--){
        arrrev[i] = *right;
        printf("%d ", arrrev[i]);
        right = right -1 ;   
    }
   
    return 0;
}