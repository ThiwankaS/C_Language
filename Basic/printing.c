#include <stdio.h>

int main(void) {

    // -- %[parameter][flags][width][.precision][length]type --
    
    //Printing a regular string to the console
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("Explore printf()\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf(" 01. Printing a regular string value \n");
    printf("-------------------------------------------------------\n");
    printf("This is a string!\n");

    //Printing a string with tab space
    printf("-------------------------------------------------------\n");
    printf(" 02. Using tab spacing \n");
    printf("-------------------------------------------------------\n");
    printf("\tThis is the same string with tab space!\n");

    //Using place holders
    printf("-------------------------------------------------------\n");
    printf(" 03. Using place holders \n");
    printf("-------------------------------------------------------\n");
    // --> Integergs
    int x = 12;
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
    printf("-------------------------------------------------------\n");
    printf(" 04. More formatting \n");
    printf("-------------------------------------------------------\n");
    // --> General
    printf("|%f|\n",total);

    //  --> Leave 20 charater width in between
    printf("|%20f|\n",total);

    // --> Left aligning
    printf("|%-20f|\n",total);

    // --> Limiting decimal places in values
    printf("|%-20.3f|\n",total);

    //More formating
    printf("-------------------------------------------------------\n");
    printf(" 05. Different order \n");
    printf("-------------------------------------------------------\n");
    // --> arguments are not in the same order when passing and printing
    printf("%1$d %1$#x; %3$d %3$#x ; %2$d  %2$#x\n",16,18,17);

    // --> printing the number with the sign
    printf("-------------------------------------------------------\n");
    printf(" 06. Print the sign +/- \n");
    printf("-------------------------------------------------------\n"); 
    printf("%1d : %+2d : %+3d : %4d \n",10,10,-10,-10);
    printf("%1$+d : %3$+d : %2$+1d : %4$+d\n",10,20,-10,-20);
    printf("%2$-10d : %1$d\n",10,-20);

    // --> prepends zeros
    printf("-------------------------------------------------------\n");
    printf(" 07. Prepends zeros \n");
    printf("-------------------------------------------------------\n");
    printf("|%5d|\t",9);
    printf("|%05d|\n",9);

    // --> dynamic width
    printf("-------------------------------------------------------\n");
    printf(" 08. Dynamic width \n");
    printf("-------------------------------------------------------\n");
    printf("|%0*d|\n",8,123);
    printf("|%0*d|\n",10,123);

    // --> dynamic percisioning
    printf("-------------------------------------------------------\n");
    printf(" 09. Dynamic percisioning \n");
    printf("-------------------------------------------------------\n");
    printf("|%.*f|\n",2,3.14159265);
    printf("|%.*f|\n",4,3.14159265);
    printf("|%0*.*f|\n",8,2,3.14159265);
    printf("|%0*.*f|\n",8,4,3.14159265);
    printf("|%010d| : |%010.3f|\n",12345678,3.141593);

    return 0;
}