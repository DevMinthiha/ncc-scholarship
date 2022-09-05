#include "stdio.h"
void myFun(int* a, int* b);
int main(){

    int firstData=10;
    int secondData=20;

    printf("Before Passing firstData = %d , SecondData = %d ",firstData , secondData);

    myFun(&firstData , &secondData);


    printf("\nAfter Passing firstData = %d , SecondData = %d \n",firstData , secondData);

    return 0;
}

void myFun(int* a, int* b){

    int temp= *a*10;
    *a = *b*10;
    *b = temp;
}
