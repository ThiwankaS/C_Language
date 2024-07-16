#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
    char s[] = "aabcAefghIhlkMnoPQrsTU";
    int length = strlen(s);
    int countA = 0;
    int countVowels = 0;
    int a = 0;
    int vowel = 0;

    //General way of using switch statement
    for(int i = 0; i < length; i++){
        switch(toupper(s[i])){
            case 'A':
                countA++;
                countVowels++;
                break;
            case 'E':
                countVowels++;
                break;
            case 'I':
                countVowels++;
                break;
            case 'O':
                countVowels++;
                break;
            case 'U':
                countVowels++;
                break;
        }
    }
    //Using fall through-logic
    for(int i = 0; i < length; i++){
        switch(toupper(s[i])){
            case 'A':
                a++;
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowel++;
        }
    }

    printf("-------------------------------------------------------\n");
    printf(" General way of using switch statement \n");
    printf("-------------------------------------------------------\n");
    printf("No of As in the string : %d \n", countA);
    printf("No of vowels in the string : %d \n", countVowels);
    printf("-------------------------------------------------------\n");
    printf(" Using switch statement with fall through logic \n");
    printf("-------------------------------------------------------\n");
    printf("No of As in the string : %d \n", a);
    printf("No of vowels in the string : %d \n\n", vowel);

    return 0;
}