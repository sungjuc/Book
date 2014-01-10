#include <stdio.h>

int main() {
	struct fraction {
		int numerator;
		int denominator;
	};

	struct fraction *f1, *f2;
	(*f1).numerator = 22;
	(*f1).denominator = 7;

	f2 = f1;

	printf("f1->numerator: %d\n", f1->numerator);
	printf("f1->denominator: %d\n", f1->denominator);

	return 0;
}
