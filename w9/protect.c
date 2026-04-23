#include <stdio.h>
#include <stdlib.h>

void echo()
{
    char buf[4];
    printf("%lX\n", (long unsigned)buf);
    fgets(buf, 4, stdin);
    puts(buf);
}

int main()
{
    echo();
    return 0;
}