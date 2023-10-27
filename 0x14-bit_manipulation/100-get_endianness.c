#include "main.h"

/**
 * get_endianness - returns the endianness of the system
 * Return: 1 if the system is little-endian, 0 if it is big-endian.
 */
int get_endianness(void)
{
	unsigned long int n = 1;

return (*(char *)&n);
}
