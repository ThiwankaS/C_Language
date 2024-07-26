#include <stdio.h>
#include <stdlib.h>


int main (void){
    int size = 0; 
    printf("Enter a size : ");
    scanf("%d",&size);
    int *a = malloc(sizeof(int) * size);
    for(int i = 0; i < size; i++){
        a[i] = i * 2;
    }
    printf("Printing the array with data... \n");
    for(int i = 0; i < size; i++){
        printf("a[%d] : %d\n",i,a[i]);
    }
    a = realloc(a, (size + 5) * sizeof(int));
    for(int i = size; i < (size + 5); i++){
        a[i] = 100;
    }
    printf("Printing the array with data after realloc... \n");
    for(int i = 0; i < (size+5); i++){
        printf("a[%d] : %d\n",i,a[i]);
    }
    free(a);
    return 0;
}