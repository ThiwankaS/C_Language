#include <stdio.h>

void swap(int a, int b);
void swap2(int *a, int *b);

int main (void){
    int x = 10;
    int y = 5;
    swap(x,y);
    printf("x = %d,y = %d \n",x,y);
    swap2(&x,&y);
    printf("x = %d,y = %d \n",x,y);
    return 0;
}

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}