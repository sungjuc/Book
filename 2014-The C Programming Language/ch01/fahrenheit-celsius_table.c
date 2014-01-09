#include <stdio.h>

main () 
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -70;
	upper = 50;
	step = 1;
	
	fahr = lower;
	printf("%20s %10s\n", "fahrenheit", "celsius");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%20.0f %10.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

