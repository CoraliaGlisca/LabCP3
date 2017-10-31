#include <stdio.h>
#include <stdlib.h>

int interative_Fibonacci(int n);

int main()
{
     int number;

    printf("Enter a positive integer: ");

    scanf("%d", &number);

    if (number < 0)
        printf("That is not a positive integer.\n");
    else
        printf(" Fibonacci is: %d", iterative_Fibonacci(number));
}
int iterative_Fibonacci(int n)
{
   if (n <= 2)
   {
     return 1;
   }
   int a = 1, b = 1, c;
   int i;
   for (i = 0; i < n - 2; ++i)
   {
     c = a + b;
     b = a;
     a = c;
   }
   return a;
}
