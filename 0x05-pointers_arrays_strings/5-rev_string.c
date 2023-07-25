
/**
 * rev_string - reverses a string variable contents
 * @s: pointer to first character of the string
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int count = 0;
	
	if (*(s + len) == 0)
		return;
	while (*(s + len) != 0)
	{
		len++;
	}
	len -= 1;
	while (count < len / 2)
	{
		int upper_index = len - count;
		int lower_index = count;
		
		if (upper_index > 0)
		{
			char tmp = *(s + upper_index);
			s[upper_index] = *(s + lower_index);
			s[lower_index] = tmp;
		}
		count++;
	}
}
