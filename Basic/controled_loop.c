#include <stdio.h>

int main (void) {

    printf("-------------------------------------------------------\n");
    printf(" General use of for loop \n");
    printf("-------------------------------------------------------\n");

    printf("Loop started !\n");

    for(int i = 1; i <= 10; i++){
        printf("i : %d \n",i);
    }

    printf("Loop completed!\n\n");

    printf("-------------------------------------------------------\n");
    printf(" Using break statment \n");
    printf("-------------------------------------------------------\n");

    printf("Loop started !\n");

    for(int i = 1; i <= 10; i++){
        if ( i == 5) break;
        printf("i : %d \n",i);
    }

    printf("Loop completed!\n\n");

    printf("-------------------------------------------------------\n");
    printf(" Using continue statment \n");
    printf("-------------------------------------------------------\n");

    printf("Loop started !\n");

    for(int i = 1; i <= 10; i++){
        if ( i == 5) continue;
        printf("i : %d \n",i);
    }

    printf("Loop completed!\n\n");

    return 0;
}