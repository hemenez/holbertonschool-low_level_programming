#include "holberton.h"
/**
 * helper_4_palindrome - function will help test if string is palindrome
 * @s: represents string fed from other function
 * @beg: represents beginning of string
 * @length: represents the end of the string
 * Return: function will return 1 if palindrome, 0 if not
 */

int helper_4_palindrome(char *s, int beg, int length)
{
	if (s[beg] == s[length] || s[beg] > s[length])
		return (1);
	if (s[beg] != s[length])
		return (0);
	return (helper_4_palindrome(s, beg + 1, length - 1));
}

/**
 * _strlen_recursion - function will count length of string
 * @s: represents string fed from function
 * Return: function will return length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0') /** counts until reaches null */
		return (1 + _strlen_recursion(s + 1));
	return (*s);
}

/**
 * is_palindrome - function returns value if palindrome
 * @s: represents string to be tested from main
 * Return: function will return 1 if palindrome, else 0
 */

int is_palindrome(char *s)
{
	int length;
	int beg;
	int hold;

	beg = 0;
	length = _strlen_recursion(s) - 1;
	hold = helper_4_palindrome(s, beg, length);

	if (length == 0) /** if string is empty */
		return (1);
	if (hold == 1) /** if string is actually palindrome */
			return (1);
	return (0);
}
