
/**
 * rev_string - reverses a string variable contents
 * @s: pointer to first character of the string
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int count = 0;
	int end = 0;

	if (*(s + len) == 0)
		return;
	while (*(s + len) != 0)
	{
		len++;
	}
	len -= 1;
	end = len / 2;
	if (len % 2 != 0)
	{
		end = (len / 2) + 1;
	}
	while (count < end)
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
