#include <stdio.h>

main() {
	float ans1 = (1.0f/3.0f + 1.0f/3.0f + 1.0f/3.0f);
	double ans2 = (1.0/3.0 + 1.0/3.0 + 1.0/3.0);
	printf("%.2f vs. %.2f\n", ans1, ans2);
    if (ans1 == ans2) {
	    printf("%.2f == %.2f is true!\n", ans1, ans2);
	} else {
	    printf("%.2f == %.2f is false!\n", ans1, ans2);
    }
}
