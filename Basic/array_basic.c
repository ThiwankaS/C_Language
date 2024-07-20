#include <stdio.h>

int main(void) {
    
    int marks [] = {91,85,78,96,54,67,69,74,76,32};
    int length = sizeof(marks)/ sizeof(marks[0]);
    double total = 0.0;

    printf("-------------------------------------------------------\n");
    printf(" List of marks\n");
    printf("-------------------------------------------------------\n");

    for(int i = 0; i < length; i++){
        printf("grage[%d] : %d \n", i, marks[i]);
        total += marks[i];
    }
    printf("-------------------------------------------------------\n");
    printf(" Total of marks\n");
    printf("-------------------------------------------------------\n");
    printf("total : %.2lf \n",total);
    printf("-------------------------------------------------------\n");
    printf(" No of students\n");
    printf("-------------------------------------------------------\n");
    printf("students : %d \n",length);
    printf("-------------------------------------------------------\n");
    printf(" Average of marks\n");
    printf("-------------------------------------------------------\n");
    printf("average : %.2lf \n",total/length);
    return 0;
}