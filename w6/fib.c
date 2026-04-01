
int fun(int n)
{
    if(n < 2)
        return 1;
    return fun(n-1) + fun(n-2);
}