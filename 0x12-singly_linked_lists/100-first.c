#include <stdio.h>

/**
 * first - prints a sentence before the execution of main function
 */

void first(void) __attribute__ ((constructor));

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
