/*
Linia cache: 64B
Drożność: 12
Rozmiar: 49152B = 12 * 2^12
Liczba wierszy: 64
*/

#include <stdio.h>
#include <stdlib.h>

char tab[2100007];
char tab2d[100007][64];

int main(int argc, char** argv)
{
    int jump = 64 * 65; // 1, 64, 64 * 64, 64 * 65
    int mod = 64 * 64 * 65; // 12 << 12, 13 << 12, 12 << 18, 64 * 64 * 65
    int limit = 10000000;

    long long res = 0;
    for(int i = 0, pos = 0; i < limit; i++, pos = (pos + jump) % mod)
        res += tab[pos];
    printf("%lld\n", res);

    return 0;
}