#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

const int c = 12345;
int g;

void bin()
{
    int32_t x = -123;
    uint32_t y = x;
    printf("%032b\n", x);
    printf("%032b\n", y);
    printf("%032b\n", x >> 2);
    printf("%032b\n", y >> 2);
    for(int i = 31; i >= 0; i--)
        printf("%d", (x >> i)&1);
    printf("\n");
}

void addr()
{
    int x;
    int* p = malloc(sizeof(int));

    printf("%0lX\n", &x);
    printf("%0lX\n", &c);
    printf("%0lX\n", &g);
    printf("%0lX\n", p);
    printf("%0lX\n", &addr);
    printf("%0lX\n", &printf);
}

void mem()
{
    long long x = 0x000012345678ABCD;
    unsigned char* c = (unsigned char*)&x;
    for(int i = 0; i < 10; i++, c++)
        printf("%lX: %X\n", c, *c);
}

int main()
{
    printf("%d\n", 0x3B6D);
    printf("%d\n", (int) sizeof(long));
    bin();
    addr();
    mem();

    return 0;
}