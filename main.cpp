#include "mbed.h"

int nth_term = 9;

int fib(int n);


int main() {

    printf("Lab 2 Program \r\n");

    for(int i=0; i<nth_term; i++){
        printf("%d,", fib(i));
    }

    printf("\r\n");

}
int fib(int n){
    //take abd inpit.. caluclate part of the fibonaci serir=es and return result
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    else{
        return (fib(n-1) + fib(n-2));
    }

}