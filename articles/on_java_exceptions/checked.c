#include<stdlib.h>
#include<stdio.h>

/** 
 * Returns 0 on success. Other return values indicate errors
 * */
__attribute__ ((warn_unused_result)) int myFunc(void);

int main(void) {
	myFunc();
}


int myFunc(void) {
	char *mem = malloc(1);
	if (mem == NULL) { 
		return 1;
	}
	return 0;
}
