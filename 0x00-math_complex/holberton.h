#ifndef TOOLS_C
#define TOOLS_C

#include <stdio.h>
#include <math.h>

typedef struct complex
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);

complex conjugate(complex c);

double modulus(complex c);

#endif /* TOOLS_C */
