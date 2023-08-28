#include "main.h"
/**
<<<<<<< HEAD
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
=======
 *  * _memset - fill a block of memory with a specific value
 *   * @s: starting address of memory to be filled
 *    * @b: the desired value
 *     * @n: number of bytes to be changed
 *      *
 *       * Return: changed array with new value for n bytes
 *        */
char *_memset(char *s, char b, unsigned int n)
{
		int i = 0;

			for (; n > 0; i++)
					{
								s[i] = b;
										n--;
											}
				return (s);
>>>>>>> c54f277aa91aeab384c52bf71cf7c98a1ae989f0
}

