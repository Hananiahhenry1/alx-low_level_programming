/**
 * _strchr - locates a character in a string
 * @s: pointer string
 * @c: string
 * Return: c is string found or NULL is non
 */
char *_strchr(char *s, char c)
{
	char i;

	for (i = 0; i <= s[i]; i++)
	{
		if (c == s[i])
			return (s[i]);
		else
			return ('\0');
	}
}
