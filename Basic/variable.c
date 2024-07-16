#include <stdio.h>

int main (void) {
    
    //Varibale declartion and value assiging inline
    int position = 10;
    printf("Position : %d\n ",position);

    //Varibale declartion 
    int x, y, z;

    //Value assiging inline
    x = 2;
    y = 3;
    z = 4;
    printf("x : %d, y : %d, z = %d \n",x,y,z);

    //Numbers with decimal value with out high precesion
    float mynum = 98.125678;
    printf("mynum : %lf\n",mynum);

    //Numbers with decimal value with high precesion
    double mydouble = 98.125678;
    printf("mydouble : %lf\n",mydouble);

    //Character declaratio and value assigning
    char c = 'Y';
    printf("c : %c\n",c);

    //Printing ASCII value 
    printf("c : %d\n",c);

    return 0;
}