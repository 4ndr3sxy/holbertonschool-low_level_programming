#include "holberton.h"

/**
 * is_palindrome - send the char * to function search_palindrome()
 * @s: Chain of characters
 * Return: 1 to palindrome or 0 to not palindrome.
 */
int wildcmp(char *s1, char *s2)
{
	int val;

	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		if (*(s2 + 1) != '\0' && *s1 == '\0')
		{
			return (0);
		}
	}
	if (*s1 == *s2)
	{
		s1 = s1 + 1;
		s2 = s2 + 1;
		return (wildcmp(s1, s2));
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			s2 = s2 + 1;
			return (wildcmp(s1, s2));
		}
		else if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		else
			return (wildcmp(s1 + 1, s2));
	}
	return (0);
}

int main(void)
{
	int r;

	r = wildcmp("main.c", "*.c");
	printf("%d\n", r);
	r = wildcmp("main.c", "m*a*i*n*.*c*");
	printf("%d\n", r);
	r = wildcmp("main.c", "main.c");
	printf("%d\n", r);
	r = wildcmp("main.c", "m*c");
	printf("%d\n", r);
	r = wildcmp("main.c", "ma********************************c");
	printf("%d\n", r);
	r = wildcmp("main.c", "*");
	printf("%d\n", r);
	r = wildcmp("main.c", "***");
	printf("%d\n", r);
	r = wildcmp("main.c", "m.*c");
	printf("%d\n", r);
	r = wildcmp("main.c", "**.*c");
	printf("%d\n", r);
	r = wildcmp("main-main.c", "ma*in.c");
	printf("%d\n", r);
	r = wildcmp("main", "main*d");
	printf("%d\n", r);
	r = wildcmp("abc", "*b");
	printf("%d\n", r);
	return (0);
}
