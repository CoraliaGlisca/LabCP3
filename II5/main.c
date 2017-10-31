#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int computeSum(int n);

int main()
{
    int n, sum;

    printf("Enter n: ");

    scanf("%d", &n);

    printf("\nThe sum of the first %d numbers is:%d", n,sum);
}

int computeSum(int n)
{
    int sum=0;
    int nextValue=1;
    int i;
    for(i=1;i<=n;i++)
    {
        sum+=nextValue;
        nextValue*=3;

    }
}
