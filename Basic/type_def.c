#include <stdio.h>

typedef int kilometers;

int main (void) {
    kilometers Helsinki, Tampere, Turku;
    Helsinki = 450;
    Tampere = 300;
    Turku = 280;
    printf("Distance to Helsinki : %d\n",Helsinki);
    printf("Distance to Tampere : %d\n",Tampere);
    printf("Distance to Turku : %d\n",Turku);
    return 0;
}