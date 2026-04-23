#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main();

const int c = 12345;
int g;
double tab[1007];

void addr()
{
    static int st;
    int x;
    int* p1 = malloc(sizeof(int));
    int* p2 = malloc(4000);
    int* p3 = malloc(400000);

    printf("%0lX - x\n", &x);
    printf("%0lX - &p1\n", &p1);
    printf("\n");
    printf("%0lX - p3\n", p3);
    printf("\n");
    printf("%0lX - printf\n", &printf);
    printf("%0lX - sqrt\n", &sqrt);
    printf("\n");
    printf("%0lX - p1\n", p1);
    printf("%0lX - p2\n", p2);
    printf("\n");
    printf("%0lX - c\n", &c);
    printf("%0lX - g\n", &g);
    printf("%0lX - tab\n", &tab);
    printf("%0lX - st\n", &st);
    printf("\n");
    printf("%0lX - addr\n", &addr);
    printf("%0lX - main\n", &main);
}

int main()
{
    addr();
    getchar();

    return 0;
}