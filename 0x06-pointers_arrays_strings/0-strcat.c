#include "holberton.h"

/**
 * *_strcat - concatenate strings.
 *@dest: dest
 *@src: src
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
  int i, ii;

  for (i = 0; dest[i] != '\0'; i++)
    {
    }
  for (ii = 0; src[ii] != '\0'; ii++)
    {
      dest[i++] = src[ii++];
      dest[i] = '\0';
    }
      return (dest);
}
      

