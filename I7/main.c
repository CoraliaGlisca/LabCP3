#include <stdio.h>
#include<string.h>

int main()
{
    int n;
    int ok=1;
    do
    {
        if(ok==0)
            puts("ERROR");
        scanf("%d", &n);
        ok=0;

    }while(n<0||n>90);
}
