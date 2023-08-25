#include <stdio.h>

/*function declaration */
void execute_first(void);

/**
 * execute_first_init - function that adds the constructor attribute
 * adding the constructor attribute to specify that
 * it should be called before main function
 * return: void
 */
void execute_first_init(void) __attribute__((constructor));
void execute_first_init(void)
{
	execute_first();
}

/**
 * execute_first - this function is executed before the main function
 * Return: nothing
 */
void execute_first(void)
{
	printf("You're beat! and yet, you must allow,\nI
			 bore my house upon my back!\n");
}
