/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include "my.h"
#include "navy.h"

char	*my_malloc(char *str)
{
	int	a = 0;
	char	*str2;

	if ((str2 = malloc((my_strlen(str) + 2) * sizeof(char))) == NULL)
		return (NULL);
	while (str[a] != '\0') {
		str2[a] = str[a];
		a++;
	}
	str2[a + 1] = '\0';
	free(str);
	return (str2);
}

char	*get_next_line(const int fd)
{
	int		a = 0;
	int		size = 0;
	static char	buffer[SIZE_BUFFER];
	char		*str;

	if ((str = malloc(sizeof(char))) == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	while ((size = read(fd, buffer, SIZE_BUFFER)) > 0
			&& buffer[0] != '\n') {
		str = my_malloc(str);
		str[a] = buffer[0];
		a++;
	}
	if ((size == 0 && a == 0) || str[0] == '\n')
		return (NULL);
	else
		return (str);
}
