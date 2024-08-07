#include <stdio.h>

int fibbonacci(int n);

int main(void)
{
    int limit = 0;
    int value = 0;
    int firstNum = 0;
    int secondNum = 1;
    printf("Please enter a positive integer : ");
    scanf("%d", &limit);
    printf("Iterrative solution \n ........................ \n");
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
    printf("Recurssive solution \n ........................ \n");
    for (int i = 0; i < (limit); i++)
    {
        printf("%d", fibbonacci(i));
        if (i < limit - 1)
            printf(",");
        else
            printf("\n");
    }
    return 0;
}

int fibbonacci(int n)
{
    if (n > 1)
        return fibbonacci(n - 1) + fibbonacci(n - 2);
    else if (n == 1)
        return 1;
    else if (n == 0)
        return 0;
    else
    {
        printf("Oppos an error occurred!");
        return -1;
    }
}