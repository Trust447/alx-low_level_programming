#include <stddef.h>
#include "main.h"
/* _strspn - Calculates the length of the initial segment
 * @s: Pointer to the string to be scanned.
 * @accept: Pointer to the string containing characters to match.
 *
 * Return: The number of characters in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	while (*s != '\0' && _strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}
	return count;
}

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (_strchr(accept, *s) != NULL) 
		{
			return s;
		}
		s++;
	}
	return NULL;
}

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0') 
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return haystack;
		}

		haystack++;
	}
	return NULL;
}
