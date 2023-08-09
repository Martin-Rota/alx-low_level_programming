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
	unsigned long int mask = 1, j;
	int mask_length = index, int_length = 0;

	for (j = n; j > 0; j >>= 1)
	{
		int_length += 1;
	}
	int_length -= 1;
	
	mask = mask << mask_length;

	if (index > int_length)
		return(-1);

	else if (n & mask)
		return(1);

	else
		return(0);
}
