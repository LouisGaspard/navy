/*
** EPITECH PROJECT, 2018
** navy
** File description:
** navy
*/

#include "my.h"
#include "navy.h"

char	**first_fill(char **tab)
{
	int     a = 0;

	while (a != 8) {
		tab[a] = my_strdup(". . . . . . . .");
		tab[a][15] = '\0';
		a++;
	}
	tab[a] = NULL;
	return (tab);
}
