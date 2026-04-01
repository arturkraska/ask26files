
int forwardD(int a)
{
    return a*a;
}

int forwardC(int a, int b)
{
    return forwardD(b) + forwardD(a);
}

int forwardB(int a, int b)
{
    return forwardC(b, a);
}

int forwardA(int a, int b)
{
    return forwardB(a, b);
}

int fun(int n)
{
    return forwardA(2*n, 3*n);
}

int suma(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
    return a+b+c+d+e+f+g+h+i;
}