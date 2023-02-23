#include <unistd.h>

/**
 * return 0 (success)
 *
 * on error, return -1, and error is set appropriately
 * */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
