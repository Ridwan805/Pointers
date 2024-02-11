#include <stdio.h>

int add(int a, int b){
    printf("Addition of the number is: %d", a+b);
}

int subtract(int a, int b){
    printf("Subtraction of the number is: %d", a-b);
}

int multiply(int a, int b){
    printf("Multiplication of the number is: %d", a*b);
}

float divide(float a, float b){
    printf("division of the number is: %.2lf", a/b);
}

int main(){
    
    int (*cal[])(int,int) = {add,subtract,multiply};
    //cal is the array of function pointer which stores the int functions 

    float (*cal2[])(float,float) = {divide};
    // cal2 is the array of function pointer which stores the float functions

    unsigned int num, a = 15, b = 10;

    printf("Press 0 for addition, 1 for subtraction, 2 for multiplication, 3 for division: \n");

    scanf("%d", &num);

    
    if (0<= num && num <= 2){
       (*cal[num])(a,b);
    }
    else if (num == 3){
        (*cal2[0])(a,b);
    }
    else{ 
        printf("not possible");
    }

    return 0; 

}