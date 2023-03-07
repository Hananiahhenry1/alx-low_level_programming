/**
 * _strchr - locates a character in a string
 * @s: pointer string
 * @c: string
 * Return: c is string found or NULL is non
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return ('\0');
}
