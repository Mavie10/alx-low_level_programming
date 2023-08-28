#include "main.h"
#include <stdio.h>
/**
<<<<<<< HEAD
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 = sum1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
=======
 *  * print_diagsums - Entry point
 *   * @a: input
 *    * @size: input
 *     * Return: Always 0 (Success)
 *      */
void print_diagsums(int *a, int size)
{
		int sum1, sum2, y;

			sum1 = 0;
				sum2 = 0;

					for (y = 0; y < size; y++)
							{
										sum1 = sum1 + a[y * size + y];
											}

						for (y = size - 1; y >= 0; y--)
								{
											sum2 += a[y * size + (size - y - 1)];
												}

							printf("%d, %d\n", sum1, sum2);
>>>>>>> c54f277aa91aeab384c52bf71cf7c98a1ae989f0
}

