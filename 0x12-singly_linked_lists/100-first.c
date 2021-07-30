#include "lists.h"
#include <stdio.h>

void myStartupFun(void) __attribute__((constructor));

/**
 * myStartupFun - print before that main()
 * Retuen: Without return
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n
	I bore my house upon my back!\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("(A tortoise, having pretty good sense of a
	hare's nature, challenges one to a race.)\n");
	return (0);
}
