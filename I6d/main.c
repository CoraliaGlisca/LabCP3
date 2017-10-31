/*the code prints out 48 asterisks*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
     for (i = 1; i <= 40; i += 15)
        for (j = 1; j <= i; j++)
           printf ("*");
}
