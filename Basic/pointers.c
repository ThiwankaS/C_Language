#include <stdio.h>

void swap (int *a, int *b);

int main(void) {

    //General variable decleration
    int x = 50;
    int y = 75;

    //Pointers decleration
    int *a = &x; 
    int *b = &y;

    printf("Before swap...\n");

    printf(" x = %d\n",x);
    printf(" y = %d\n",y);
    printf(" a = %p\n",a);
    printf(" b = %p\n",b);
    printf(" *a = %d\n",*a);
    printf(" *b = %d\n",*b);
    
    swap(&x,&y);

    printf("After swap...\n");
    printf(" x = %d\n",x);
    printf(" y = %d\n",y);
    printf(" a = %p\n",a);
    printf(" b = %p\n",b);
    printf(" *a = %d\n",*a);
    printf(" *b = %d\n",*b);

    return 0;
}

void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}