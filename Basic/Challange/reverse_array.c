#include <stdio.h>

void reverse(int array[], int size);
void printArray(int array[], int size);

int main (void) {
    int myArray[] = {0,1,2,3,4,5,6,7,8,9};
    int size = sizeof(myArray)/sizeof(myArray[0]);
    printf("Original array \n ............................ \n\n");
    printArray(myArray,size);
    reverse(myArray,size);
    printf("After revers the array \n ............................ \n\n");
    printArray(myArray,size);
    return 0;
}

void reverse(int array[], int size){
    int temp = 0;
    for(int i = 0; i < (size/2); i++){
        temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
}

void printArray(int array[], int size){
    printf(" array[%d] = {",size);
    for(int i = 0; i < size; i++){
        printf(" %d",array[i]);
        if(i > (size - 2)) break;
        printf(",");
    }
    printf(" }\n\n");
}