#include <stdio.h>

int main(void) {
    
    //Printing a regular string to the console
    printf("This is a string!\n");

    //Printing a string with tab space
    printf("\tThis is the same string with tab space!\n");

    //Using place holders
    // --> Integergs
    int x = 10;
    printf("Integer : %d\n",x);

    // --> Charater
    char c = 'T';
    printf("Character : %c\n",c);

    // --> Floating value
    float total = 19.80;
    printf("Float value : %f\n",total);

    // --> Double value
    double share = 19.80;
    printf("Double value : %f\n",share);

    // --> String value
    char str[] = "This is another string!\n";
    printf("%s",str);

    //Using formatter
    // --> General
    printf("|||%f|||\n",total);

    //  --> Leave 20 charater width in between
    printf("|||%20f|||\n",total);

    // --> Left aligning
    printf("|||%-20f|||\n",total);

    // --> Limiting decimal places in values
    printf("|||%-20.3f|||\n",total);
    return 0;
}