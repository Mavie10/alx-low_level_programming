#include "main.h"

/**
 * set_bit - bit in index
 * @n: the number to index
 * @index: the bit to set
 *
 * return: 1 success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
