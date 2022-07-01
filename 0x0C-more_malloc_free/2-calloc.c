#include<stdlib.h>
#include"main.h"
/**
 * _calloc - Allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *_array;
    unsigned int i;

    if ( nmemb == 0 || size == 0)
        return(NULL);

    _array = malloc(nmemb * size);

    if( _array == NULL)
    return(NULL);

    for( i = 0; i < (nmemb * size); i++)
        _array[i] = '\0';

    return(_array);
}
