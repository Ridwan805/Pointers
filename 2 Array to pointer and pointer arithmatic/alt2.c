/*This is an alternative and efficient way of 2.c*/
#include <stdio.h>

int main(){

    int arr[] = {10,20,30,40,50,70,80,90,100,110,112,117,116};
    int n; 
    scanf("%d", &n);

    int s = 0,*ptr = arr;
    int size = sizeof(arr)/sizeof(arr[0]);
    for (ptr = arr; ptr<arr+size ;ptr++){
        if (n == *ptr){
            printf("%d is in the array", n);
            s = 1;
            break;
        }
    }
    if (s !=1){
        printf("%d not in the array", n);
    }

    return 0;
    
}