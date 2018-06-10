/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** my_strcat
*/

#include "my.h"

char	*my_strcat(char *s1, char *s2)
{
	int	a = my_strlen(s1);
	int	b = my_strlen(s2);
	char	*str;

	str = malloc(sizeof(char) * (a + b) + 1);
	a = 0;
	b = 0;
	while (s1[a]) {
		str[b] = s1[a];
		a++;
		b++;
	}
	a = 0;
	while (s2[a]) {
		str[b] = s2[a];
		a++;
		b++;
	}
	str[b] = '\0';
	return (str);
}
