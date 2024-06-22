#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase followed by a new line.
 *              You can only use putchar twice in your code.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }
    putchar('\n');

    return (0);
}

