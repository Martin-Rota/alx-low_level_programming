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
* c: character to check                                                        
*                                                                            
* Return: 1 if lowercase, 0 otherwise                                          
*/

int _islower(int c);

#endif
