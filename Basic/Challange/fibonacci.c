#include <stdio.h>

int main(void)
{
    int limit = 0;
    int value = 0;
    int firstNum = 0;
    int secondNum = 1;
    printf("Please enter a positive integer : ");
    scanf("%d", &limit);
    if (limit <= 0)
    {
        printf("Please enter value greater than 0!");
    }
    else if (limit == 1)
    {
        printf("0");
    }
    else if (limit == 2)
    {
        printf("0,1");
    }
    else
    {
        printf("0,1");
        for (int i = 0; i < (limit - 2); i++)
        {
            value = firstNum + secondNum;
            printf(",%d", value);
            firstNum = secondNum;
            secondNum = value;
        }
    }
    printf("\n");
    return 0;
}