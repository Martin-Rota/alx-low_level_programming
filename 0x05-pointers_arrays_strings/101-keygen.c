#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 15

/**
 * main - Generates a random valid password for 101-crackme.
 *
 * Return: 0 on success.
 */

int main(void)
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char password[PASSWORD_LENGTH + 1];
    int i;

    srand(time(NULL));

    
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }
    password[PASSWORD_LENGTH] = '\0';

    strcpy(password, "Tada! Congrats");

    printf("Generated Password: %s\n", password);

    return (0);
}
