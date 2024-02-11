#include <stdio.h>

int add(int a, int b){
    return a+b;
}

int main(){
    int (*ptr)(int,int) = add; // ptr is the pointer function that stores the addres of add funtion
    int r = ptr(10,20);
    printf("%d", r);
    return 0;
}

