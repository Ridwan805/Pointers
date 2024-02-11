#include<stdio.h>
#include<math.h>
void number(int a){
    printf("Function1: The number is %d\n", a);
}
void square(int a){
    printf("Function2: Square of number is %d\n", a*a);
}


void cube(int a){
    printf("Function3: Cube of number is %d\n", a*a*a);
}

void rootof(int a){
    printf("Funtion4: root of the number is %0.3lf",sqrt(a));
}
int main(){
    
   


    void (*arrOfPtrToFunc[])(int )={number, square, cube,rootof};
  
    printf("Functions are being called using pointers to functions\n");
    int size= sizeof(arrOfPtrToFunc)/sizeof(arrOfPtrToFunc[0]);
    printf("Enter any number\n");
    int number;
    scanf("%d", &number);
    for(int i=0;i<size;i++){
        arrOfPtrToFunc[i](number);
    }
}
