#include "main.h"

/**
* get_bit -  returns the value of a bit at a given index
* @n: decimal number
* @index: index of bit you want to get
*
* Return: value of bit at specified index, -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;
	int mask_len = index;

	mask = mask << mask_length;

	if (n & mask)
		return('1');

		return('0');
}
