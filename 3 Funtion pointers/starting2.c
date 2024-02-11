#include <stdio.h>

int greater(int a, int b){
    if (a > b){
        return a; 
    }
    else{
        return b;
    }
}

int main(){
    int (*big)(int,int) = greater;
    int result = big(60,3);

    printf("%d", result);
    return 0;
  
}