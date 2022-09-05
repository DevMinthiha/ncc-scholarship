#include "stdio.h"
void doSomething(int* ptr);
int main(){


    int data=10;
    int* ptr;

    ptr = &data ;

    doSomething(ptr);

    printf(" value of ptr %d ",*ptr);

    return 0;
}

void doSomething(int* ptr){

    (*ptr)++;


}