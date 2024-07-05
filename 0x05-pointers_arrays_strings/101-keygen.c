#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
	char password[PASSWORD_LENGTH + 1]; /* +1 for null terminator */
	int i;

	/* Seed the random number generator */
	srand(time(NULL));

	/* Generate random password */
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = rand() % 94 + 33; /* ASCII printable characters from 33 to 126 */
	}
	password[PASSWORD_LENGTH] = '\0'; /* Null-terminate the string */

	/* Output the password */
	printf("%s\n", password);

	return 0;
}

