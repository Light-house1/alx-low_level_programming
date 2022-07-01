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