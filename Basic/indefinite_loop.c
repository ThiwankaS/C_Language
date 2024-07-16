#include <stdio.h>

int main (void) {

    int i = 0;

    while (i != 5) {
        printf("Enter number 5 to quit : \t");
        scanf("%d",&i);
    }

    printf("Loop terminated! \n");

    return 0;
}