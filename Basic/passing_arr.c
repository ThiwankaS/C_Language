#include <stdio.h>

void add(int x);
void add_ptr(int *x);
void add_arr(int myarray[]);
void add_arr_ptr(int *myarray);

int main(void) {
    int a = 5;
    printf("a : %d\n",a);//Output is a : 5
    add(a); //Passing a copy of an argument 
    printf("a : %d\n",a);//Output is a : 5
    add_ptr(&a); //Passing the pointer of the argument
    printf("a : %d\n",a);//Output is a : 6
    int array[5] = {1,2,3,4,5};
    printf("array[0] : %d\n",array[0]);//Output is array[0] : 1
    add_arr(array);//Passing an array to the function
    printf("array[0] : %d\n",array[0]);//Output is array[0] : 2
    add_arr_ptr(array);//Passing an array to the function
    printf("array[0] : %d\n",array[0]);//Output is array[0] : 3
    return 0;
}

void add(int x){
    x = x + 1;
}

void add_ptr(int *x){
    *x = *x + 1;
}

void add_arr(int myarray[]){
    myarray[0] = myarray[0] + 1;
}

void add_arr_ptr(int *myarray){
    myarray[0] = myarray[0] + 1;
}
