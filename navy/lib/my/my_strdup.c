/*
** EPITECH PROJECT, 2017
** my_strdup
** File description:
** my_strdup
*/

#include "my.h"

char	*my_strdup(char const *str)
{
	char	*dest = malloc(sizeof(*str) * my_strlen(str) + 1);

	dest = my_strcpy(dest, str);
	return (dest);
}
