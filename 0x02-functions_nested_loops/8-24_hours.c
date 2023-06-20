#include "main.h"
/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 * Description: Start from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int j;
	int d = 0, h = 0, m = 0, s = 0; /* day, hour, minutes and seconds */

	for (j = 0; j < 1440; j++)
	{
		_putchar(d + '0');
		_putchar(h + '0');
		_putchar(':');
		_putchar(m + '0');
		_putchar(s + '0');
		_putchar('\n');

		s++;
		if (s > 9)
		{
			s = 0;
			m++;
		}
		if (m > 5)
		{
			m = 0;
			h++;
		}
		if (h > 9)
		{
			h = 0;
			d++;
		}
	}
}
