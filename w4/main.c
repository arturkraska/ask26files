#include <stdio.h>

int fun(int a, int b);

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", fun(x, y));
    return 0;
}