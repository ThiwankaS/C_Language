#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome (char string[]);
void check_palindrome(char string[]);

int main (void){
    char word1[] = "kayak";
    char word2[] = "aabbccdd";
    char word3[] = "racecar";
    check_palindrome(word1);
    check_palindrome(word2);
    check_palindrome(word3);
    return 0;
}

bool is_palindrome (char string[]) {
    bool result = false;
    int length = strlen(string);
    for(int i = 0; i < (length/2); i++){
        if(string[i] == string[length - i - 1]){
            result = true;
        }else {
            result = false;
        }
    }
    return result;
}

void check_palindrome(char string[]){
    bool result =  is_palindrome(string);
    if(result == true){
        printf("%s is a palindrome!!!\n",string);
    } else {
        printf("Oops! %s is not a palindrome.\n",string);
    }
}