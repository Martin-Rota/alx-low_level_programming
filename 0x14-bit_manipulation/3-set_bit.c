#include "main.h"

/**
* set_bit -  sets the value of a bit to 1 at a given index
* @n: pointer to decimal number
* @index: index of bit you want to set
*
* Return: 1 if successful, -1 if error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	mask = mask << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	else {
		*n |= mask;
		return (1);
	}
}
