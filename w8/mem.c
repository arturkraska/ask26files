#include <stdio.h>

int t1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int t2[] = {10, 11, 12, 13, 14, 15};

int main()
{
	int *t3 = (int*)t1;
	
	for(int i = 0; i <= 20; i++)
		printf("%d ", t3[i]);
	printf("\n");
	
	printf("%d\n", t1[1][2]);
	printf("%d\n", t1[1][5]);
	printf("%d\n", t1[2][7]);
	printf("%d\n", t1[3][3]);
	printf("%d\n", t3[7]);
	printf("%d\n", t3[13]);

	return 0;
}