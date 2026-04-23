#include <stdio.h>
#include <cstddef>

struct S1
{
    char c;
    double v;
    int i[3];
} *p;

int main()
{
	printf("sizeof(p): %lu\n", sizeof(p));
	printf("sizeof(*p): %lu\n", sizeof(*p));
	printf("sizeof(p->c): %lu\n", sizeof(p->c));
	printf("sizeof(p->i): %lu\n", sizeof(p->i));
	printf("sizeof(p->i[1]): %lu\n", sizeof(p->i[1]));
	printf("sizeof(p->v): %lu\n\n", sizeof(p->v));
    
	printf("alignof(S1): %lu\n", alignof(p));
	printf("alignof(*p): %lu\n", alignof(*p));
	printf("alignof(p->c): %lu\n", alignof(p->c));
	printf("alignof(p->i): %lu\n", alignof(p->i));
	printf("alignof(p->i[1]): %lu\n", alignof(p->i[1]));
	printf("alignof(p->v): %lu\n\n", alignof(p->v));

	printf("offsetof(c): %lu\n", offsetof(S1, c));
	printf("offsetof(i): %lu\n", offsetof(S1, i));
	printf("offsetof(i[1]): %lu\n", offsetof(S1, i[1]));
	printf("offsetof(v): %lu\n", offsetof(S1, v));

	return 0;
}