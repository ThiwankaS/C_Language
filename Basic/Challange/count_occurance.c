#include <stdio.h>

int find_occurances(int array[],int size,int to_find);

int main (void) {
    int myArray1 [] = {4,9,7,6,5,8,3,2,1,5};
    int myArray2 [] = {0,0,0,1,0,1,0,0};
    int find1 = find_occurances(myArray1,10,5);
    int find2 = find_occurances(myArray2,8,0);
    printf("# of 5s found is %d \n",find1);
    printf("# of 0s found is %d \n",find2);
    return 0;
}

int find_occurances(int array[],int size,int to_find) {
    int count = 0;
    for(int i = 0; i < size; i++)
        if(array[i]== to_find) count ++;
    return count;
}