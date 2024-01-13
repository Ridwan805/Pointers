#include <stdio.h>

int main(){
    // here we are declearing a pointer 
    int m = 10,n,o;
    int *z = &m; // declearing the pointer and initializing the pointer 

    printf("z stores the address of m: %p\n", z);
    printf("*z stores the value of m: %d\n", *z);
    printf("&m is the address of m = %p\n", &m );
    printf("&n stores the address of n = %p\n",&n);
    printf("&o stores the address of o = %p\n", &o);
    printf("&z stores the address of o = %p\n", &z);

    return 0;
}