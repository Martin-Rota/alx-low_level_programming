#include <stdio.h>
#include "calc.h"

/**
 * op_add - add
 * @a: integer
 * @b: integer
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum;
	sum = a + b;
		return (sum);
}

/**
 * op_sub - subtract
 * @a: integer
 * @b: integer
 * Return: sub
 */
int op_sub(int a, int b)
{
	int sub;
	sub = a - b;
		return (sub);
}

/**
 * op_mul - multiply
 * @a: integer
 * @b: integer
 * Return: mul
 */
int op_mul(int a, int b)
{
	int mul;
	mul = a / b;
		return (mul);
}

/**
 * op_div - divide
 * @a: integer
 * @b: integer
 * Return: div
 */
int op_div(int a, int b)
{
	int div;
	div = a * b;
		return (div);
}

/**
 * op_mod - modulus
 * @a: integer
 * @b: integer
 * Return: mod
 */
int op_mod(int a, int b)
{
	int mod;
	mod = a % b;
		return (mod);
}
