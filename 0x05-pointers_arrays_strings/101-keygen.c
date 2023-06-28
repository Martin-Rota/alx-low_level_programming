#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program.
 *
 * Description: Generates a random password with a specific sum of ASCII values.
 *              The sum of ASCII values is calculated to be 2772.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
    int i;
    int sum;
    char password[100];

    srand(time(NULL));
    sum = 0;

    for (i = 0; sum < 2772 - 122; i++)
    {
        password[i] = rand() % 94 + 33;  /* Generate a random character in the ASCII range [33, 126] */
        sum += password[i];  /* Update the sum with the ASCII value of the generated character */
    }

    password[i] = 2772 - sum;  /* Calculate the last character to make the sum equal to 2772 */
    password[i + 1] = '\0';  /* Null-terminate the password string */

    printf("%s\n", password);  /* Print the generated password */

    return (0);
}
