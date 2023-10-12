#include "shell.h"
/**
* vfree - frees the pointer and makes the address null
* @ptr: pointer to be freed address
*
* Return: if successful 1, if it fails 0
*/
int vfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
