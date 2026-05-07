#include <stdio.h>
#include <stdlib.h>
// #include "my_malloc.h"

int* ptab[100];

void show_memory(int *from, int n)
{
    for(int i = 0; i < n;)
    {
        printf("0x%lX:", (unsigned long)(from+i));
        for(int j = 0; j < 8; j++, i++)
            printf(" %8X", *(int*)(from+i));
        printf("\n");
    }
}

void my_allocate(int from, int to)
{
    for(int i = from; i <= to; i++)
    {
        ptab[i] = malloc(i*sizeof(int));
        *ptab[i] = (i<<20) + 0xC0DE;
        printf("zaalokowal %2d: %lX\n", i, (unsigned long)ptab[i]);
    }
}

void my_free(int from, int to)
{
    for(int i = from; i <= to; i++)
    {
        free(ptab[i]);
        printf("zwolnil %2d: %lX\n", i, (unsigned long)ptab[i]);
    }
}

int main()
{
    // mm_init();
    ptab[0] = malloc(1);
    
    my_allocate(1, 10);
    show_memory(ptab[0], 512);
    my_free(6, 10);
    show_memory(ptab[0], 512);
    my_allocate(6, 15);
    show_memory(ptab[0], 512);
}