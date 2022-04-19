#include "Hell.h"

/**
 * hell_error - this is funtion
 * @no_error: int
 * @msg: char
 * @c: char
 */

void hell_error(int no_error, char *msg, long c)
{
	int ln = 0;
	char *errr = NULL;
	char *rrmsg = ": not found\n";
	char buff[20];

	errr = malloc((sizeof(char) * _strlen(msg)) + 1);
	if (errr == NULL)
	{
		free(errr);
		return;
	}
	_itoa(c, buff);
	_strcat(errr, "hsh: ");
	_strcat(errr, buff);
	_strcat(errr, ": ");
	_strcat(errr, msg);

	ln = _strlen(errr);
	errr[ln - 1] = '\0';

	if (no_error == (14))
	{
		write(1, errr, (ln + 1));
		write(1, rrmsg, 13);
	}
	else
	{
		perror(errr);
	}
	free(errr);
}
