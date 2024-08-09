#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vowel_count(char *s);

int main(void)
{
    char str1[] = "It's a wonderful life!";
    char str2[] = "AaEeIiOoUu";
    int str1Count = vowel_count(str1);
    int str2Count = vowel_count(str2);
    printf("No of vowels in the string 1 is : %d\n", str1Count);
    printf("No of vowels in the string 2 is : %d\n", str2Count);
    return 0;
}

int vowel_count(char *s)
{
    int length = strlen(s);
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        switch (tolower(s[i]))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            count++;
        }
    }
    return count;
}