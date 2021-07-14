#include "holberton.h"

/**
 * search_palindrome - search if the chain is palindrome
 * @string: chain
 * @i: size of chain
 * @i1: middle to chain
 * @j: increment
 * Return: 1 or 0
 */
int with_asterisk(char *string1, char *string2)
{

}

int without_asterisk(char *string1, char *string2)
{
	
}
/**
 * asterisl_in_chain - search the size of the chain
 * @s: Chain
 * @i: increment
 * Return: size of chain
 */
int asterisl_in_chain(char *s, int i)
{
	if (s[i] == '*')
	{
		return (1);
	}
	else
	{
		i++;
		asterisl_in_chain(s, i);
		return (0);
	}
}

/**
 * is_palindrome - send the char * to function search_palindrome()
 * @s: Chain of characters
 * Return: 1 to palindrome or 0 to not palindrome.
 */
int wildcmp(char *s1, char *s2)
{
	int i = 0, i1, j = 0, validater;

	i = asterisl_in_chain(s2, i);
	if (i)
	{
		validater = with_asterisk(s1, s2);
	}
	else
	{
		validater = without_asterisk(s1, s2);
	}

	return (validater);
}
