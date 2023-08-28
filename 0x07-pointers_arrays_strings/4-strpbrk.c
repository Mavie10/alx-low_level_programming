#include "main.h"
/**
<<<<<<< HEAD
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
=======
 *  * _strpbrk - Entry point
 *   * @s: input
 *    * @accept: input
 *     * Return: Always 0 (Success)
 *      */
char *_strpbrk(char *s, char *accept)
{
			int k;

					while (*s)
								{
												for (k = 0; accept[k]; k++)
																{
																				if (*s == accept[k])
																								return (s);
																							}
														s++;
																}

						return ('\0');
>>>>>>> c54f277aa91aeab384c52bf71cf7c98a1ae989f0
}

