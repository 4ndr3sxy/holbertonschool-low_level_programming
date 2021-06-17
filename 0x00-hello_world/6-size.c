#include <stdio.h>

/**
 *main - init function
 *Description: print size of type of data
 *Return: 0 to success
 */
int main(void)
{
int intT;
float floatT;
char charT;
long int longIT;
long long int longDT;

printf("Size of a char: %ld byte(s)\n", sizeof(charT));
printf("Size of an int: %ld byte(s)\n", sizeof(intT));
printf("Size of a long int: %ld byte(s)\n", sizeof(longIT));
printf("Size of a long long int: %ld byte(s)\n", sizeof(longDT));
printf("Size of a float: %ld byte(s)\n", sizeof(floatT));
return (0);
}
