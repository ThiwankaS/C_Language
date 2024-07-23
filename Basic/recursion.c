#include <stdio.h>

int factorial(int n);

int main (void) {

    int n = 0;
    int value = 0;
    int fact = 1;
    printf("Enter possitive integer : \n");
    scanf("%d",&n);
    value = n;

    //Iterative solution
    while( n >= 1){
        fact = n * fact;
        n--;
    }

    printf("Factorial value of %d is (%d!) : %d\n",value,value,fact);

    //Recursive solution
    int result = factorial(value);
    printf("Factorial value of %d is (%d!) : %d\n",value,value,result);

    return 0;
}

int factorial(int n){
    if(n == 1) return 1;
    return n * factorial(n-1);
}