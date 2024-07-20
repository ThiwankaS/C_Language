#include <stdio.h>

int main(void) {
    // Sample array containing student marks
    int marksCopy [] = {82,71,74,92,58,67,98,73,52,61,89,100,90,70,85,47,74,74,95,77,87,63,79,84,91,59,72,80,99,88,69,74,93,64,81,57,97,76,86,62,56,94,78,68,83,55,65,96,75,51};
    int marks [] = {82,71,74,92,58,67,98,73,52,61,89,100,90,70,85,47,74,74,95,77,87,63,79,84,91,59,72,80,99,88,69,74,93,64,81,57,97,76,86,62,56,94,78,68,83,55,65,96,75,51};

    // Calculate the number of elements in the array (dynamic length)
    int length = sizeof(marks)/sizeof(marks[0]);
    // Bubble sort algorythm implementation
    /*
        bubbleSort(array)
            for i <- 1 to indexOfLastUnsortedElement-1
                if leftElement > rightElement
            swap leftElement and rightElement
        end bubbleSort
    */
    for(int step = 0; step < length; step++){
            // Flag to track if any swaps were made in a pass (optimization)
            int swap = 0;
        // Inner loop iterates through unsorted part of the array
        for(int i = 0; i < (length - 1 - step) ; i++){
            // Check if current element is greater than the next element
            if(marks[i] > marks[i+1]){
                // Swap elements if out of order
                int temp = marks[i];
                marks[i] = marks[i+1];
                marks[i+1] = temp;
                // Set swap flag to indicate a swap occurred in this pass
                swap = 1;
            }
        }
        // If no swaps occurred in the inner loop, the array is already sorted
        if(swap == 0) {
            break;
        }
    }
    printf("-------------------------------------------------------\n");
    printf(" Sorting integer array using Bubble Sort algorythm \n");
    printf("-------------------------------------------------------\n");
    // Use consistent formatting for table headers
    printf("--------------------------------\n");
    printf("| %-8s | %-8s | %-6s |\n", "index","u.sorted", "sorted");
    printf("--------------------------------\n");
    for(int j = 0; j < length; j++ ){
        // Use consistent formatting for each row
        printf("| %-8d | %8d | %6d |\n", j, marksCopy[j], marks[j]);
    }
    printf("--------------------------------------\n");
    return 0;
}