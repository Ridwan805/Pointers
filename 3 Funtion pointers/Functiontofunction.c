#include <stdio.h>

void info_int(int id, int age, int year){
    printf("ID: %d\nAge: %d\nYear: %d\n", id,age,year);
}

void info_char(char name[],char city[]){
    printf("Name: %s\nCity: %s", name,city);
}

void overall(void (*over)(int,int,int), void (*over1)(char[],char[])){
    over(2,22,2024);
    over1("Ridwan", "Dhaka");
}
/*here info_int and info_char are two simple function
and overall is the pointer function which is taking */


int main(){
    overall(info_int,info_char); 
    return 0;
}
