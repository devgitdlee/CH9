#include <stdio.h>

int main(void) {

	int a = 10;
	int *p = &a;
	*p = 20;
	printf("%d", a);

	//a = 20;

	return 0;
}