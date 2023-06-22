#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 * print_alphabet - print lowercase alphabet
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void);

/**
* _islower - checks if a character is lowercase                                
* @c: character to check                                                        
*                                                                            
* Return: 1 if lowercase, 0 otherwise                                          
*/

int _islower(int c);

/**
* _isalpha - checks if a character is an alphabetic character                  
* @c: character to check                                                       
*                                                                              
* Return: 1 if alphabetic, 0 otherwise                                         
*/

int _isalpha(int c);

/**
* print_sign - prints the sign of a number
* @n: the number to check
*
* Return: 1 if n > zero, 0 if n = zero, -1 if n < zero
 */

int print_sign(int n);

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to compute the absolute value of
 *
 * Return: the absolute value of n
 */

int _abs(int n);

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n);

/**
* jack_bauer - prints every minute of the day of Jack Bauer                      
*/

void jack_bauer(void);
	
/**
 *times_table - prints the 9 times table, starting with 0                        
 */

void times_table(void);

/**
 * add - add two integers
 * @a: two integer arguments
 * @b: two integer arguments
 * Return: sum
 */

int add(int a, int b);
	
/**
* print_to_98 - print numbers n to 98                                            
 * @n: integer argument                                                           */

void print_to_98(int n);

#endif
