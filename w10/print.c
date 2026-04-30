#include <stdio.h>

void wypisz(char* str)
{
    printf(str);
}

int main()
{
    wypisz("pierwsze wywolanie\n");
    wypisz("drugie wywolanie\n");
    return 0;
}