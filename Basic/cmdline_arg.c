#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    printf("No of arguments : %d\n", argc); //Print no of availabe command line args

    //Check user has input correct no of command line arguments
    if(argc != 3){
        printf("Two integer arguments needed !\n");
        exit(-1);
    }

    //Convert commandline args to integers
    int lower = atoi(argv[1]);
    int upper = atoi(argv[2]);

    for(int i = lower; i < upper; i++){
        printf("%d\n",i);
    }

    return 0;
}