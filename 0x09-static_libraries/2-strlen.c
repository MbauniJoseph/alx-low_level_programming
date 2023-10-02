#include <stdio.h>

/**
 *  _strlen - Returns dtring length
 *   @str: the string
 *   Return: lenth
 */
size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);

}
