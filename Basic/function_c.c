#include <stdio.h>

//Function declaration
int add (int a, int b);
int mult (int a, int b);
void print_int(int x);

int main(void) {

    printf("-------------------------------------------------------\n");
    printf(" Function declaration and defenition in C \n");
    printf("-------------------------------------------------------\n");

    printf("Sum of 4 and 5 : %d \n",add(4,5));
    printf("Multiplication of 4 and 5 : %d \n",mult(4,5));
    print_int(10);
    return 0;
}

//Function defenition
int add (int a, int b) {
    return a + b;
}

int mult (int a, int b) {
    int result = 0;
    for (int i = 0; i < a; i++) {
        result = add(result,b);
    }
    return result;
}

void print_int(int x){
    printf("Int : %d\n",x);
}
