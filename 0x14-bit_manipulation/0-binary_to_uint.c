#include "main.h"

\**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number, 0 Otherwise.
 *\
 
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	size_t len;
	int i = 0, lsb, base = 1;
	
	len = strlen(b);

	if (b == NULL)
		return (0);

	while (i < len){
		if (b[i] != '0' && b[i] != '1')
			return (decimal);
	}
	i++;

	for (i = len - 1; i >= 0; i--)
		if (b[i] == '1')
			decimal += base;

		else base *= 2;
			
	return (decimal);
}
