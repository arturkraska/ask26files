#include <stdio.h>
#include <stdlib.h>

#define ZLEN 5
typedef int zip_dig[ZLEN];
zip_dig cmu = { 1, 5, 2, 1, 3 };
zip_dig mit = { 0, 2, 1, 3, 9 };
zip_dig ucb = { 9, 4, 7, 2, 0 };

zip_dig* tab[] = {&cmu, &mit, &ucb};

int main()
{
    for(int i = 0; i < 3; i++)
        printf("%X\n", tab[i]);

    return 0;
}