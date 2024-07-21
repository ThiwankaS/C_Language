#include <stdio.h>

int main (void) {

    char test[5] = "test";//String intializing
    printf("%s\n",test);

    for(int i = 0; i < 5;i++){
        printf("test[%d] = '%c'\n",i,test[i]);
    }
    char test2[] = "Some long string!";
    printf("%s\n",test2);
    return 0;
}