#include <stdio.h>

int main(void) {
    // Sample array containing student marks
    int marksCopy [] = {82,71,74,92,58,67,98,73,52,61,89,100,90,70,85,47,74,74,80,100,77,87,63,79,84,91,59,72,80,99,88,69,74,93,64,81,57,97,76,86,62,56,94,78,68,83,55,65,96,75,51};
    int marks [] = {82,71,74,92,58,67,98,73,52,61,89,100,90,70,85,47,74,74,80,100,77,87,63,79,84,91,59,72,80,99,88,69,74,93,64,81,57,97,76,86,62,56,94,78,68,83,55,65,96,75,51};

    // Calculate the number of elements in the array (dynamic length)
    int length = sizeof(marks)/sizeof(marks[0]);
    //Variable to hold index of the minimum element
    int min_index;
    //selection Sort algorythm implementation
    /*
        selectionSort(array, size)
            repeat (size - 1) times
            get the first unsorted element index as the minimum value index
            for each of the unsorted elements
                if element < currentMinimum
                    set element index as new minimum index
            swap minimum with first unsorted position
        end selectionSort
    */
    //repeat (size - 1) times
    for(int i = 0; i < length - 1;i++){
        //Set the first unsorted element as the minimum
        min_index = i;

        //Finding the actual minimum element among the unsorted elements
        for(int j = i + 1;j < length; j++){
            //if element < currentMinimum
            if(marks[j] < marks[min_index]){
                //Update the index of the new minimum
                min_index = j;
            }
        }
        //swap minimum with first unsorted position
        int temp = marks[i];
        marks[i] = marks[min_index];
        marks[min_index] = temp;
    }

    printf("-------------------------------------------------------\n");
    printf(" Sorting integer array using Selection Sort algorythm \n");
    printf("-------------------------------------------------------\n");
    // Use consistent formatting for table headers
    printf("--------------------------------\n");
    printf("| %-8s | %-8s | %-6s |\n", "index","u.sorted", "sorted");
    printf("--------------------------------\n");
    for(int j = 0; j < length; j++ ){
        // Use consistent formatting for each row
        printf("| %-8d | %8d | %6d |\n", j, marksCopy[j], marks[j]);
    }
    printf("--------------------------------\n");
    return 0;
}