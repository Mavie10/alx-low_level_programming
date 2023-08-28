#include "main.h"
/**
<<<<<<< HEAD
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
=======
 *  *_memcpy - a function that copies memory area
 *   *@dest: memory where is stored
 *    *@src: memory where is copied
 *     *@n: number of bytes
 *      *
 *       *Return: copied memory with n bytes changed
 *        */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		int r = 0;
			int i = n;

				for (; r < i; r++)
						{
									dest[r] = src[r];
											n--;
												}
					return (dest);
}

>>>>>>> c54f277aa91aeab384c52bf71cf7c98a1ae989f0
