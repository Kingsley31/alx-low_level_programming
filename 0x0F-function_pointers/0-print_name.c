
/**
 * print_name - prints a name using function pointer
 * @name: name to be printed
 * @f: function pointer used to print name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
