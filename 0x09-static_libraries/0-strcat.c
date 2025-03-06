char *_strcat(char *dest, char *src)
{
	char *appended = dest;

	while(*appended != '\0')
	{
		appended++;
	}
	while (*src != '\0')
	{
		*appended = *src;
		appended++;
		src++;
	}
	*appended = '\0';

	return dest;
}
