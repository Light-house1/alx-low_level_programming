#include<stdlib.h>
#include"main.h"

int *array_range(int min, int max)
{
    int *_array;
    int i, size ;
    size = max - min + 1;

    if(min > max)
        return(NULL);

    _array = malloc(sizeof(int) * size);

    if (_array == NULL)
        return(NULL);

     for( i = 0; i < size; i++)
        _array[i] = min++;

    return(_array);
}