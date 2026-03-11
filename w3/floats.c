#include <stdio.h>
#include <stdlib.h>

union my_float_union
{
    int x;
    float f;
};

int main()
{
    float ft[] = {1, 1<<16, -1, -5, -0.0, 1/0.0, 1/0.0-1/0.0};
    for(int i = 0; i < 7; i++)
    {
        float f = ft[i];
        // int x = f;
        int x = *(int*)&f;
        printf("%08X = %032b = %f\n", x, x, f);
    }

    union my_float_union u;
    u.x = 0x7FFFFFFF;
    printf("%08X = %f\n", u.x, u.f);

    u.f = 5;
    while(u.f != 0)
    {
        u.f /= 2;
        printf("%032b\n", u.x);
    }

    return 0;
}