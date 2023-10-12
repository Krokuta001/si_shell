#include "shell.h"
/**
* _strlen - return length of string
* @s: string which length to be  checked
*
* Return: string length in integer
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}
/**
* _strcmp - does lexicogarphic comparison of two strangs
* @s1: first strang
* @s2: second strang
*
* Return: if s1 < s2 Negative, if s1 > s2 PoSitive, if s1 == s2 Zero
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}
/**
* starts_with - sees if needle starts with haystack
* @haystack: string to be searched
* @needle: substring to be found
*
* Return: the next character of haystack address or NULL
*/
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}
/**
* _strcat - joins two strings
* @dest: destination buffer
* @src: buffer source
*
* Return: points at destination buffer
*/
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
