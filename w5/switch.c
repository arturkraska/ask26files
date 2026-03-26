
int fun(int a, int b)
{
    switch(a)
    {
        case 1: 
            b += 7;
        case 2: 
            b += 11;
            break;
        case 3:
        case 5:
            b /= 3;
        case 6:
            b = b*7+12;
        
        default:
            b -= 100;
    }
    return b;
}