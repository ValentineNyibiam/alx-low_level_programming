#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome using recursion
 * @s: The string to be checked if it is a palindrome
 *
 * Return: 1 if a string is a palindrome, else 0
 */
int is_palindrome(char *s)
{
	int i, index = 0;
	char *s_copy;

	if (s == NULL)
		return (-1);

	for(i = 0; s[i] != '\0'; i++)
		;
	s_copy = malloc(sizeof(char) * (i + 1));
	if (s_copy == NULL)
		return (-1);

	while (index < i)
	{
		s_copy[index] = s[index];
		index++;
	}
	s_copy[index] = '\0';
	return (check_palindrome(s_copy, s, i, 0));
	/**printf("%d\n", i);
	printf("%s\n", s_copy);
	return 0;*/
}

int check_palindrome(char *s_copy, char *s, int s_len, int i)
{
	if (s[i] == s_copy[s_len])
	{
		if (s[i + 1] == '\0')
			return (1);
		i++;
		s_len--;
		check_palindrome(char *s_copy, char *s, int s_len, int i);
	}
}

int main(void)
{
	int res = is_palindrome("hello");
	printf("%d\n", res);
	return (0);
}
