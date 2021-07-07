#include "holberton.h"

void sum_chars(int *cy, int *cy1, char *cn1, char *cn2, char *r)
{
	int digLeft = 0, digRight = 0;
	int tmpNum1 = 0, tmpNum2 = 0, tmpSum = 0;
	int count = 0;
	int y = --*cy;
	int y1 = --*cy1;
	int x = 0, x1 = 0;

	while (y >= 0 || y1 >= 0)
	{
		if (cn1[x])
			tmpNum1 = cn1[x] - '0';
		else
			tmpNum1 = 0;
		if (cn2[x1])
			tmpNum2 = cn2[x1] - '0';
		else
			tmpNum2 = 0;
		tmpSum = tmpNum1 + tmpNum2;
		tmpSum += digLeft;
		digLeft = tmpSum / 10;
		digRight = tmpSum % 10;
		r[count] = digRight + '0';

		y--;
		y1--;
		x++;
		x1++;
		count++;
	}
	if (digLeft > 0)
		r[count] = digLeft + '0';
	r[count + 1] = '\0';
}

void save_reverse_char(int *cx, int *cy, char *n, char *cn)
{
	int ccx = *cx;
	int y = 0;

	while (ccx >= 0)
	{
		cn[y] = n[ccx];
		y++;
		ccx--;
	}
	cn[y] = '\0';
	*cy = y;
	*cx = ccx;
	/*
	printf("cp ccx=%d\n",ccx);
	printf("cp cx=%d\n",*cx);
	printf("cp cy=%d\n",*cy);
	printf("cp n=%s\n",n);
	printf("cp cn=%s\n",cn);
	*/
}

void reverse_char(char *cn, int *cx)
{
	int x = 0;
	while (cn[x])
	{
		x++;
	}
	x--;
	*cx = x;
}

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
	int x = 0, x1 = 0, y = 0, y1 = 0;
	char cn1[100], cn2[100];

	reverse_char(n1, &x);
	reverse_char(n2, &x1);

	save_reverse_char(&x, &y, n1, cn1);
	save_reverse_char(&x1, &y1, n2, cn2);

	int digLeft = 0, digRight = 0;
	int tmpNum1 = 0, tmpNum2 = 0, tmpSum = 0;
	int count = 0;
	--y;
	--y1;
	++x;
	++x1;

	while (y >= 0 || y1 >= 0)
	{
		if (cn1[x])
			tmpNum1 = cn1[x] - '0';
		else
			tmpNum1 = 0;
		if (cn2[x1])
			tmpNum2 = cn2[x1] - '0';
		else
			tmpNum2 = 0;
		tmpSum = tmpNum1 + tmpNum2;
		tmpSum += digLeft;
		digLeft = tmpSum / 10;
		digRight = tmpSum % 10;
		r[count] = digRight + '0';

		y--;
		y1--;
		x++;
		x1++;
		count++;
	}
	if (digLeft > 0)
		r[count] = digLeft + '0';
	r[count + 1] = '\0';

	printf("----\n%s\n----\n",r);

	printf("cn1=%s \ncn2=%s\nx=%d\nx1=%d\ny=%d\ny1=%d\n", cn1, cn2, x, x1, y, y1);

	return (r);
}

int main(void)
{
	char *n = "123456789";
	char *m = "1";
	char r[100];
	char r2[10];
	char r3[11];
	char *res;

	res = infinite_add(n, m, r, 100);
	return (0);
}
/*
int main(void)
{
	char *n = "12345";
	char *m = "56789";
	char r[100];
	char r2[10];
	char r3[11];
	char *res;

	res = infinite_add(n, m, r, 100);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
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
	return (0);
}
*/

/*
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	while (x >= 0)
	{
		printf("2)%d-%d\n",y,x);
		printf("3)cn1=%d\n",cn1[y]);
		cn1[y] = n1[x];
		y++;
		x--;
	}
	cn1[y] = '\0';

	while (x1 >= 0)
	{
		cn2[y1] = n2[x1];
		y1++;
		x1--;
	}
	cn2[y1] = '\0';
}
	*/
