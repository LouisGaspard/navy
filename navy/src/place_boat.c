/*
** EPITECH PROJECT, 2018
** navy
** File description:
** navy
*/

#include "my.h"
#include "navy.h"

char	**place_boat(char **tab, char *map)
{
	int     a = 0;
	t_boat  boat;

	while (a != 4) {
		if ((tab = size_boat(&boat, map, a, tab)) == NULL)
			return (NULL);
		a++;
	}
	return (tab);
}

char	**place_boat_v(char **tab, t_boat *boat)
{
	int     col = boat->x1 * 2;
	int     a = boat->x2;

	while (a != boat->y2 + 1) {
		if (tab[a][col] == '.')
			tab[a][col] = boat->c;
		else
			return (NULL);
		a++;
	}
	return (tab);
}

char	**place_boat_h(char **tab, t_boat *boat)
{
	int     col = boat->x2;
	int     a = boat->x1 * 2;

	while (a != (boat->y1 * 2) + 2) {
		if (tab[col][a] == '.')
			tab[col][a] = boat->c;
		else
			return (NULL);
		a += 2;
	}
	return (tab);
}
