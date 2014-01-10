#include <stdio.h>

struct fraction {
	int numerator;
	int denominator;
};


int main() {
    int *p;
    int i;
	struct fraction f1;

    p = &i;
    *p = 42;

	p = &(f1.numerator);
	*p = 22;

	p = &(f1.denominator);
	*p = 7;

	printf("i: %d\n", i); 
	printf("f1.numerator: %d\n", f1.numerator); 
	printf("f1.denominator: %d\n", f1.denominator);
	printf("*p: %d\n", *p);
	 
	return 0;
}
