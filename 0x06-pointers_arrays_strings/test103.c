#include "holberton.h"

/**
 * infinite_add - function
 * @n1: char 1
 * @n2: char 2
 * @r: char 3
 * @size_r: int 1
 * Return: char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int valN1 = 0;
	int tmpvalN1 = 0;
	int valN2 = 0;
	int tmpvalN2 = 0;
	/*int count = 0;*/
	int digLef = 0;
	int digRig;
	int tmpN1;
	int tmpN2;
	int tmpN;
	int sizeM = size_r;

	while (n1[tmpvalN1])
	{
		tmpvalN1++;
	}
	/*printf("-%d,",valN1);*/
	while (n2[tmpvalN2])
	{
		tmpvalN2++;
	}

	//printf(".%d-%d.\n",valN1,valN2);
	/*sizeM++;*/
	sizeM = 0;
	//printf("-%d-\n",sizeM);

	/*while ((valN1 || valN2) && size_r >= 0)*/
	while ((n1[valN1] || n2[valN2]) && (sizeM <= tmpvalN1 || sizeM <= tmpvalN2))
	{

		printf("**n1=%c | n2=%c **\n", n1[valN1], n2[valN2]);
		tmpN1 = (n1[valN1] >= '0' && n1[valN1] <= '9' ? n1[valN1] : '0') - '0';
		tmpN2 = (n2[valN1] >= '0' && n2[valN1] <= '9' ? n2[valN2] : '0') - '0';
		tmpN = tmpN1 + tmpN2;
		printf("**n1=%d + n2=%d = %d**\n", tmpN1, tmpN2, tmpN);
		tmpN += digLef;
		printf("#tmp=%d + digL=%d#\n", tmpN, digLef);
		digLef = tmpN / 10;
		digRig = tmpN % 10;
		printf("*dl=%d,dr=%d*\n", digLef, digRig);
		r[sizeM] = digRig + '0';
		printf("**%c**\n", r[sizeM]);

		/*
		if (n1[valN1])
			valN1--;
		if (n2[valN2])
			valN2--;
			*/
		valN1++;
		valN2++;
		sizeM++;
	}
	return (r);
}

/*
int main(void)
{
	char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
	char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
	char r[100];
	char *res;
	int xy = 0;

	res = infinite_add(n, m, r, 100);

	while (*res == '\0')
	{
		printf("-%c", res[xy]);
		xy++;
	}
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	return (0);
}
*/

int main(void)
{
	char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
	char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
	char r[100];
	char r2[10];
	char r3[11];
	char *res;
/*
	res = infinite_add(n, m, r, 100);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	*/
	n = "1234567890";
	m = "1";
	res = infinite_add(n, m, r2, 10);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	/*
	n = "999999999";
	m = "1";
	res = infinite_add(n, m, r2, 10);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	res = infinite_add(n, m, r3, 11);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}

	*/
	return (0);
}
