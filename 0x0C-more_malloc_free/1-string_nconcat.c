#include<stdlib.h>
#include"main.h"
/**
 * string_nconcat - Allocates space in memory
 * @s1: first string
 * @s2: second string
 * @n: Max number of s2
 *Return: if function fail -NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char * concat; 
    unsigned int i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";
        
    for (i = 0; s1[i] || s2[i]; i++)
    {
        j++;
    }
    concat = malloc(sizeof(char) * (j + 1));

    if (concat == NULL)
        return(NULL);
    
    j = 0;
    for(i = 0; s1[i]; i++)
    {
        concat[j++] = s1[i];
    }
    i = 0;
    for(i = 0; s2[i] && i < n; i++)
    {
        concat[j++] = s2[i];
    }
    concat[j] = '\0';

    return(concat);
}

/**
#include "main.h"
#include <stdlib.h>


 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}
*/