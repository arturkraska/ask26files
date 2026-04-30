#include <stdio.h>

int z;

int sum(int *a, int n);

int array[2] = {1, 2};

int main(int argc, char** argv)
{
    scanf("%d %d", &array[0], &array[1]);
    int val = sum(array, 2);
    printf("suma wynosi %d\n", val);
    return 0;
}