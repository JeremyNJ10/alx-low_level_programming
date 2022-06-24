#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);


void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */

void swap_int(int *a, int *b);

int _strlen(char *s);

void _puts(char *str);

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 */

void print_rev(char *s);

/**
 * print_rev - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s);

/**
 * puts2 - prints every second character of a string, followed by a new line
 * @str: string to print
 */

void puts2(char *str);

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */

void puts_half(char *str);

void print_array(int *a, int n);

char *_strcpy(char *dest, char *src);

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s);

#endif
