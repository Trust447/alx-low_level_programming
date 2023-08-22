#include "main.h"
#include <stddef.h>
/* _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: Value to be set.
 * @n: Number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n) 
{
	for (unsigned int i = 0; i < n; i++) {
		s[i] = b;
	}
	return s;
}

/* _memcpy - Copies memory area from source to destination.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to be copied.
 *
 * Return: A pointer to the destination memory area @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n) 
{
	for (unsigned int i = 0; i < n; i++) {
		dest[i] = src[i];
	}
	return dest;
}
/* _strchr - Locates the first occurrence of a character in a string.
 * @s: Pointer to the string to be searched.
 * @c: Character to be located.
 *
 * Return: A pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0') {
		if (*s == c) {
			return s;
		}
		s++;
	}
	return NULL;
}
