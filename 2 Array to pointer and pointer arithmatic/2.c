#include <stdio.h>

int main(){

    int arr[] = {10,20,30,40,50,70,80,90,100,110,112,117,116};
    int n; 
    scanf("%d", &n);

    int s = 0,*ptr = arr;
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i<size;i++){
        if (n == *ptr){
            printf("%d is in the array", *ptr);
            s = 1;
            break;
        }
    ptr++;    
    }
    if (s !=1){
        printf("%d not in the array", n);
    }

    return 0;
    
}