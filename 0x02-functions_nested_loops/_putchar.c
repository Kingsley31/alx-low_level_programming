#include "main.h"
#include <unistd.h>


/**
 * _putchar - dispalys a character to standard output
 *
 * @c: The character that should be displayed
 * Return: should be 1 if succeeded 
 */

int _putchar(char c)
{
	return write(1,&c,1);
}
