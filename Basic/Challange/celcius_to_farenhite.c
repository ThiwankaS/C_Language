#include <stdio.h>

int main (void){
    double celcius = 0.0;
    double ferenhite = 0.0;
    printf("Enter the tempreture in Celcius : ");
    scanf("%lf",&celcius);
    ferenhite = (celcius * 9/5) + 32;
    printf("Tempreture in Ferenhite : %.2lf F\n",ferenhite);
    return 0;
}