#include "main.h"

/**
* get_endianness -  checks endianness
*
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	unsigned int num = 8;
	char *ptr = (char *)&num;

	if (ptr == 0)
		{
		return (0);
		}
	else
		{
		return (1);
		}
}
