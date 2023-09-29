#include "main.h"

int check_prime(int, int);

/**
 * is_prime_number - collects the result from the check_prime function
 * @n: Input of integer type
 * Return: Returns 1 if prime else 0
 */

int is_prime_number(int n)
{
        return (check_prime(n, 1));
}

/**
 * check_prime - determines if a number is prime or not
 * @n: Integer input
 * @i: counter
 * Return: Imteger
 */

int check_prime(int n, int i)
{
        if (n <= 1)
                return (0);
        else if (n % i == 0 && i > 1)
                return (0);
        else if ((n / i) < i)
                return (1);
        return (check_prime(n, i + 1));
}

