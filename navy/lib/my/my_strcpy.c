/*
** EPITECH PROJECT, 2017
** my_strcpy
** File description:
** my_strcpy
*/

char	*my_strcpy(char *dest, char const *src)
{
	int	a = 0;

	while (src[a]) {
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
