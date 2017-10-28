#include <stdio.h>
/**
 * begin - function will print string before main function exectues
 * Return: function returns void
 */
__attribute__((constructor))void begin(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
