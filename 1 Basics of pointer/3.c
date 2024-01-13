#include <stdio.h>

int main(){
    printf("Pointer : Demonstrate the use of & and * operator : \n\n\n");
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';
    
    printf("Using & operator:\n");
    printf("address of m = %p\n", &m);
    printf("address of fx = %p\n", &fx);
    printf("address of cht = %p\n\n", &cht);

    
    printf(" Using & and * operator :\n");
    
    int *ptr1 = &m; //declaring and initializing the pointer of integer
    float *ptr2 = &fx; //declaring and initializing the pointer of float
    char *ptr3 = &cht; //declaring and initializing the pointer of character
    

    printf("value at the address of m = %d\n", *ptr1);
    printf("value at the address of fx = %f\n", *ptr2);
    printf("value at the address of char = %c\n\n", *ptr3);

    printf("Using only pointer variable: \n");

    printf("address of m = %p\n", ptr1);
    printf("address of fx = %p\n", ptr2);
    printf("address of cht = %p\n\n", ptr3);

    printf("Using only pointer operator :\n");
    printf("value at address of m = %d\n", *(&m));
    printf("value at address of fx = %f\n", *(&fx));
    printf("value at address of cht = %c\n", *(&cht));

    return 0;
}