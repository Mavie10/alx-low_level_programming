#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr <= 23; min++)
	{
		for (min = 0; min <= 59; hr++)
		{
			_putchar((hr / 10) + '48');
			_putchar((hr % 10) + '48');
			_putchar(':');
			_putchar((hr / 10) + '48');
			_putchar((hr % 10) + '48');
			_putchar('\n');
		}
		
	}
}
