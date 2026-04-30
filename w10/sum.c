
int zmienna_globalna = 3;
int tab1[1000];
int tab2[] = {1, 2, 3, 4, 5};
const int tab3[] = {6, 7, 8, 9, 10};
static int tab4[] = {11, 12, 13};
extern int z;

int sum(int *a, int n)
{
    int i, s = 0;
    for (i = 0; i < n; i++) {
        s += a[i];
    }
    return s;
}

int funkcja(int x)
{
    int zmienna_lokalna = 7;
    static int zmienna_statyczna = 8;
    
    zmienna_lokalna++; 
    zmienna_statyczna++; 
    zmienna_globalna++;
    
    return zmienna_lokalna + zmienna_statyczna + zmienna_globalna + z;
}