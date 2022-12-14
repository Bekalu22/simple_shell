#include "main.h"

/**
 * bfree - make free a pointer
 * @ptr: address of the pointers to free
 *
 * Return: 1 if freed, otherwise return 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
