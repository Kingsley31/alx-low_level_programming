#include <stdlib.h>

/**
 * initmem - initializes memories to zero
 * @n: number of memory blocks
 * @p: pointer to the memory blocks
 * Return: void
 */
void initmem(void *p, unsigned int n)
{
	unsigned int *ptr = (unsigned int *) p;
	unsigned int i = 0;

	while (i < n)
        {
                ptr[i] = 0;
                i++;
        }
}

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of blocks to allocate
 * @size: size of the array elements data type
 * Return: void pointer to the newly allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	initmem(p, nmemb);
	return (p);
}
