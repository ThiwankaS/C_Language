#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str[] = "It's a wonderful life!";
    int length = strlen(str);
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        switch (tolower(str[i]))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            count++;
        }
    }
    printf("No of vowels in the string is : %d", count);
    printf("\n");
    return 0;
}