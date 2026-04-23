#include <stdio.h>
#include <cstddef>

union S1
{
	struct
	{
		char c;
	    double v;
	} u;
	
	int i[3];
} *p;

int main()
{
	printf("sizeof(p): %lu\n", sizeof(p));
	printf("sizeof(*p): %lu\n", sizeof(*p));
	printf("sizeof(*p->c): %lu\n", sizeof(p->u.c));
	printf("sizeof(*p->i): %lu\n", sizeof(p->i));
	printf("sizeof(*p->i[1]): %lu\n", sizeof(p->i[1]));
	printf("sizeof(*p->v): %lu\n\n", sizeof(p->u.v));
    
	printf("alignof(S1): %lu\n", alignof(p));
	printf("alignof(*p): %lu\n", alignof(*p));
	printf("alignof(*p->c): %lu\n", alignof(p->u.c));
	printf("alignof(*p->i): %lu\n", alignof(p->i));
	printf("alignof(*p->i[1]): %lu\n", alignof(p->i[1]));
	printf("alignof(*p->v): %lu\n\n", alignof(p->u.v));

	printf("offsetof(c): %lu\n", offsetof(S1, u.c));
	printf("offsetof(i): %lu\n", offsetof(S1, i));
	printf("offsetof(i[1]): %lu\n", offsetof(S1, i[1]));
	printf("offsetof(v): %lu\n", offsetof(S1, u.v));

	return 0;
}