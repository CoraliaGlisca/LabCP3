#include <stdio.h>
#include <stdlib.h>

int recursive_Fibonacci(int);

int main()
{
    int number;

    printf("Enter a positive integer: ");

    scanf("%d", &number);

    if (number < 0)
        printf("That is not a positive integer.\n");
    else
        printf(" Fibonacci is: %d", recursive_Fibonacci(number));
}

int recursive_Fibonacci(int x)
{
    if (x < 2)
    {
     return x;
    }
    return (Fibonacci (x - 1) + Fibonacci (x - 2));
}

