#include<stdlib.h>
#include<stdio.h>

/** 
 * Returns 0 on success. Other return values indicate errors
 * */
int myFunc(void);

int main(void) {
	if (myFunc()) {
		return EXIT_SUCCESS;
	} else {
		puts("Error while calling myFunc");
		return EXIT_FAILURE;
	}
}

int myFunc(void) {
	char *mem = malloc(1);
	if (mem == NULL) { 
		return 1;
	}
	return 0;
}
