#include "main.h"
/**
<<<<<<< HEAD
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
=======
 *  * _strstr - Entry point
 *   * @haystack: input
 *    * @needle: input
 *     * Return: Always 0 (Success)
 *      */
char *_strstr(char *haystack, char *needle)
{
		for (; *haystack != '\0'; haystack++)
				{
							char *l = haystack;
									char *p = needle;

											while (*l == *p && *p != '\0')
														{
																		l++;
																					p++;
																							}

													if (*p == '\0')
																	return (haystack);
														}

			return (0);
>>>>>>> c54f277aa91aeab384c52bf71cf7c98a1ae989f0
}

