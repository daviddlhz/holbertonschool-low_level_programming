#include "function_pointers.h"
#include <stdlib.h>
/**
 *array_iterator - is a function given as  parameter and each element in array
 *@array: array
 *@size: size of the array.
 *@action: is a pointer to the function you need to use
 *
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
