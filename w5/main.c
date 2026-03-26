#include <stdio.h>
#include <stdlib.h>

int fun(int a, int b);

int main()
{
    while(1)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", fun(a, b));
    }
    return 0;
}