#include <stdio.h>

int main (void) {
    
    int a = 5;
    int b = 2;
    printf("%d / %d = %d \n",a,b,a/b);

    double c = a / b;
    printf("%d / %d = %f \n",a,b,c);

    double d = (double) a / b;
    printf("%d / %d = %f \n",a,b,d);

    double x = 5.0;
    int y = 2;
    printf("%f / %d = %f \n",x,y,x/y);

    int z = (int) x / y;
    printf("%f / %d = %d \n",x,y,z);

    return 0;
} 