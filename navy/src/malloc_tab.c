/*
** EPITECH PROJECT, 2018
** navy
** File description:
** navy
*/

#include "my.h"
#include "navy.h"

char	**malloc_tab(void)
{
	char    **tab;

	tab = malloc(sizeof(char *) * (8 + 1));
	if (tab == NULL)
		return (NULL);
	return (tab);
}
