#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 *
 * Return: If the number is divisible - 0.
 * If the number is not divisible - 1.
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - checks if number is prime or not.
 * @n: number to be checked.
 *
 * Return: 1 if number is prime.
 * 0 if number is not prime.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	else
	{
		return (helperFunction(n, 2));
	}
}

