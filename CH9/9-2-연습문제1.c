#include <stdio.h>


int main(void) {

	int a = 10;
	int *p = &a;
	*p = 20;

	printf("a=%d", a);
	printf("*p¡÷º“=%d", sizeof(*p));
	printf("*p=%d", *p);

	return 0;
}