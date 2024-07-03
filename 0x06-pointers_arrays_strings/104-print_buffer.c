#include <stdio.h>
#include "main.h"

/**
 * print_buffer - Prints the content of a buffer
 * @b: Pointer to the buffer to print
 * @size: Number of bytes to print from the buffer
 */
void print_buffer(char *b, int size)
{
    int i, j;
    
    if (size <= 0) {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10) {
        // Print line header (position in hexadecimal)
        printf("%08x: ", i);

        // Print hexadecimal content
        for (j = 0; j < 10; j++) {
            if (i + j < size)
                printf("%02x", b[i + j]);
            else
                printf("  "); // Print spaces for alignment
            if (j % 2 != 0)
                printf(" "); // Space between pairs of hexadecimal
        }

        // Print buffer content (replace non-printable characters with '.')
        printf(" ");
        for (j = 0; j < 10 && i + j < size; j++) {
            if (b[i + j] >= 32 && b[i + j] <= 126)
                printf("%c", b[i + j]);
            else
                printf(".");
        }

        // Print newline
        printf("\n");
    }
}

