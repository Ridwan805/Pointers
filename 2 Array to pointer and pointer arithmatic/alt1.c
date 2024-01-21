/*This is simpler version of 1.c*/
#include <stdio.h>
#define Size 5 // this means where ever the compiler finds Size it will give the value 5 
// this is a global variable 

int main(){

    int arr[Size] = {},*p;
    for (p = arr; p < arr+Size;p++ ){
        scanf("%d", p);// here the user is giving the input and we are directly storing it into the array
    }
    
    for (p = arr+Size-1; p >= arr;p--){
        printf("%d ", *p);
    }
    
}