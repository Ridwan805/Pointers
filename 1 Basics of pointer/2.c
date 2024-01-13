#include <stdio.h>

int main(){

    int m = 29; //assigning the value of m
    
    printf("the address of m is %p\n",&m);
    printf("the value of m is %d\n\n",m);

    int *ab; // declaring  the pointer.
    ab = &m; // initializing the address of m in the pointer ab'

    printf("address of pointer ab : %p\n", ab);
    printf("content of pointer ab : %d\n\n", *ab);
    m = 34; // assigning the value of m to 34 now

    printf("Address of pointer ab : %p\n",ab);
    printf("Content of pointer ab : %d\n\n", *ab);

    *ab = 7; // assigning the value 7 to the variable of pointer pointed by ab

    printf("The address of m : %p\n", &m);
    printf("Value of m : %d", m);

    return 0;    

}