#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

int _putchar(char c);

void _puts_recursion(char *s);

void _print_rev_recursion(char *s);

int _strlen_recursion(char *s);

int factorial(int n);

int _pow_recursion(int x, int y);

int _sqrt_recursion(int n);

int ans_sqrt_recursion(int m, int i);

int is_prime_number(int n);

int number_prime(int n, int div);

int is_palindrome(char *s);

int wildcmp(char *s1, char *s2);
#endif /* HOLBERTON_H */
