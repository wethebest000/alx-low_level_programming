#include <stdio.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers as strings
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer r
 *
 * Return: Pointer to the result string if the result can fit in r, otherwise 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, carry = 0, sum = 0;
    int i, j, k;

    // Calculate lengths of n1 and n2
    while (n1[len1])
        len1++;
    while (n2[len2])
        len2++;

    // Reverse n1 and n2 for easier addition
    for (i = len1 - 1, j = 0; i >= 0; i--, j++)
        n1[j] = n1[i];
    for (i = len2 - 1, j = 0; i >= 0; i--, j++)
        n2[j] = n2[i];

    // Perform addition
    for (i = 0, j = 0, k = 0; i < len1 || j < len2 || carry; i++, j++, k++)
    {
        sum = carry;
        if (i < len1)
            sum += n1[i] - '0';
        if (j < len2)
            sum += n2[j] - '0';

        carry = sum / 10;
        if (k >= size_r)
            return 0; // Check if result exceeds buffer size

        r[k] = (sum % 10) + '0';
    }

    // Add null terminator
    r[k] = '\0';

    // Reverse result in r
    for (i = 0, j = k - 1; i < j; i++, j--)
    {
        char temp = r[i];
        r[i] = r[j];
        r[j] = temp;
    }

    return r;
}

