#include <stdio.h>

void printArray(int array[], int size);

int main (void) {
    int array[] = {10,20,30,40,50,60,70,80,90};
    int length = sizeof(array)/sizeof(array[0]);
    float sum = 0.0;
    float average = 0.0;
    for(int i = 0; i < length; i++){
        sum = sum + array[i];
    }
    average = sum / length;
    printf("Original array \n ............................ \n\n");
    printArray(array,length);
    printf("Count of elements in the array : %d\n",length);
    printf("Sum of the values in the array : %.2f\n",sum);
    printf("Average of the values in the array : %.2f\n",average);
    return 0;
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