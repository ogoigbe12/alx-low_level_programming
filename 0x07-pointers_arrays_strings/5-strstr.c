#include "holberton.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int d, f;

for (d = 0; haystack[d] != '\0'; d++)
{
for (f = 0; needle[f] != '\0'; f++)
{
if (haystack[d + f] != needle[f])
break;
}
if (!needle[f])
return (&haystack[d]);
}
return (NULL);
}
