#include <stdio.h>
#include <stdlib.h>
#include "eval.h"
#define BUFFERSIZE (256)

// 한줄수정

int main(void) {
	char input[BUFFERSIZE];
	
	printf("Enter your expression: ");
	fflush(stdout);
	fgets(input, BUFFERSIZE, stdin);
	printf("Result is: %.2f\n", evaluate(input));
	return EXIT_SUCCESS;
}
