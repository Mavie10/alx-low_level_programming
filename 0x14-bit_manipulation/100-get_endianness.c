#include "main.h"

/**
 * get_endianness - returns the endianness of the system
 * return: 0 if big endian,1 small
 */
int get_endianness(void)
{
	unsigned long int n = 1;

return (*(char *)&n);
}
