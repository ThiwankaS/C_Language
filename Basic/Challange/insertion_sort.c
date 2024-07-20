#include <stdio.h>

int main(void) {
    // Sample array containing student marks
    int marksCopy [] = {85,47,74,80,74,100,77,87,63,96};
    int marks [] = {85,47,74,80,74,100,77,87,63,96};

    // Calculate the number of elements in the array (dynamic length)
    int length = sizeof(marks)/sizeof(marks[0]);

    /*
                insertionSort(array)
                    mark first element as sorted
                        for each unsorted element X
                            'extract' the element X
                        for j <- lastSortedIndex down to 0
                            if current element j > X
                    move sorted element to the right by 1
                    break loop and insert X here
                end insertionSort
    */
    
    //Implement the Insertion Sort algorithm
    for(int i = 0; i < length; i++){
        //Extract the current element (key) as the first unsorted element
        int key = marks[i];
        //Variable intializing to loop over other elements to the left of the key
        int j = i - 1;
        //Move all the elements to the left of the key untill find the correct index for key
        while(key < marks[j] && j >= 0){
            //Swap elemnts
            marks[j+1] = marks[j];
            //Moving from key to left
            j--;
        }
        //Placing the key in the proper location
        marks[j+1] = key;
    }
    printf("-------------------------------------------------------\n");
    printf(" Sorting integer array using Insertion Sort algorythm \n");
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