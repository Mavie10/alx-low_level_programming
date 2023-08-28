#include "main.h"
/**
<<<<<<< HEAD
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
=======
 *  * _strspn - Entry point
 *   * @s: input
 *    * @accept: input
 *     * Return: Always 0 (Success)
 *      */
unsigned int _strspn(char *s, char *accept)
{
		unsigned int n = 0;
			int r;

				while (*s)
						{
									for (r = 0; accept[r]; r++)
												{
																if (*s == accept[r])
																				{
																									n++;
																													break;
																																}
																			else if (accept[r + 1] == '\0')
																								return (n);
																					}
											s++;
												}
					return (n);
>>>>>>> c54f277aa91aeab384c52bf71cf7c98a1ae989f0
}

