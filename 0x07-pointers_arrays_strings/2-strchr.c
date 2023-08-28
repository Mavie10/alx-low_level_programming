#include "main.h"
/**
<<<<<<< HEAD
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
=======
 *  * _strchr - Entry point
 *   * @s: input
 *    * @c: input
 *     * Return: Always 0 (Success)
 *      */
char *_strchr(char *s, char c)
{
		int i = 0;

			for (; s[i] >= '\0'; i++)
					{
								if (s[i] == c)
												return (&s[i]);
									}
				return (0);
}

>>>>>>> c54f277aa91aeab384c52bf71cf7c98a1ae989f0
