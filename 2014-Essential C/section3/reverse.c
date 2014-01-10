#include <stdio.h>

int main() {
	char string[1000];
	int len;

	strcpy(string, "SungJu Cho");
	len = strlen(string);

	printf("%s\n", string);
	
	int i, j;
	char temp;
	for (i = 0, j = len - 1; i < j; i++, j--) {
		temp = string[i];
		string[i] = string[j];
		string[j] = temp;
	} 

	printf("%s\n", string);
}
