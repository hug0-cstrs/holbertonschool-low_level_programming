#include "main.h"
/**
 * puts2 - print every other character starting from the 1st.
 * @str: input string.
 */
void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
