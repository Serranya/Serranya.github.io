#include<stdlib.h>
#include<stdio.h>

int main(void) {
	char *mem = malloc(1);
	if (mem == NULL) {
		if (puts("Error: Could not allocate memory!") == EOF) {
			// could not write
		}
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
