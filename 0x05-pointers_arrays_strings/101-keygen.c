#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Initial function
 * Description: Generate Keygen
 * Return: return 0 to success
 */
int main(void)
{
	char *array = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	int count = 2772;
	srand(time(0));
	while (count)
	{
		int numRand = ( rand() % 63);
		char charRand = array[numRand];
		count -= charRand;
		printf("%c", charRand);
		if (count <= 122)
		{
			charRand = count;
			printf("%c", charRand);
			count -= charRand;
		}
	}
	printf("\n");
	return (0);
}
