#include <stdio.h>

int main(void) {
    // Sample array containing student marks
    int marks [] = {82,71,74,92,58,67,98,73,52,61,89,100,90,70,85,47,74,74,95,77,87,63,79,84,91,59,72,80,99,88,69,74,93,64,81,57,97,76,86,62,56,94,78,68,83,55,65,96,75,51};

    // Calculate the number of elements in the array (dynamic length)
    int length = sizeof(marks)/sizeof(marks[0]);

    // Initialize variables to store minimum and maximum values
    int minimum = marks[0]; // Start with the first element as initial minimum
    int maximum = marks[0]; // Start with the first element as initial maximum

    // Loop through each element in the array
    for(int i = 1; i < length; i++){
        //Initializing the variables with the first value of the array
            // Check for new minimum value
            if(marks[i] < minimum){
                minimum = marks[i];
            }
            // Check for new maximum value
            if(marks[i] > maximum){
                maximum = marks[i];
            }
    }
    //Printing the results

    printf("-------------------------------------------------------\n");
    printf(" Finding the minimum and maximum values in an array dynamically \n");
    printf("-------------------------------------------------------\n");
    printf(" Sample array is : \n");
    printf(" marks [] = {82,71,74,92,58,67,98,73,52,61,89,100,90,70,85,47,74,74,95,77,87,63,79,84,91,59,72,80,99,88,69,74,93,64,81,57,97,76,86,62,56,94,78,68,83,55,65,96,75,51} \n");
    printf("-------------------------------------------------------\n");
    printf(" Minimum value is : %d\n", minimum);
    printf("-------------------------------------------------------\n");
    printf(" Maximum value is : %d\n", maximum);
    printf("-------------------------------------------------------\n");
    return 0;
}