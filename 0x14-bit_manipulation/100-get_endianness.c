
/**
 * get_endianness - checks the endianess of a machine
 * Return: 0 if big endian 1 
 */
int get_endianness(void)
{
	int n = 1;
	char *p = (char *)&n;
	
	return ((int)(*p));	
}
