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

#endif
