#include <stdio.h>

int main(void)
{
    char str[] = "abcdefghijklmnopqrstuvwxyz";
    int length = sizeof(str) / sizeof(str[0]);
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        switch (str[i])
        {
        case 'a':
            count++;
            break;
        case 'A':
            count++;
            break;
        case 'e':
            count++;
            break;
        case 'E':
            count++;
            break;
        case 'i':
            count++;
            break;
        case 'I':
            count++;
            break;
        case 'o':
            count++;
            break;
        case 'O':
            count++;
            break;
        case 'u':
            count++;
            break;
        case 'U':
            count++;
            break;
        }
    }
    printf("No of vowels in the string is : %d", count);
    printf("\n");
    return 0;
}