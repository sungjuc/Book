#include <stdio.h>

main () 
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -70;
	upper = 50;
	step = 1;
	
	fahr = lower;
	printf("%10s %20s\n", "celsius", "fahrenheit");
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%10.0f %20.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}

