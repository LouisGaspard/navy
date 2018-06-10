/*
** EPITECH PROJECT, 2018
** navy
** File description:
** navy
*/

#include "my.h"
#include "navy.h"

char	**size_boat(t_boat *boat, char *map, int a, char **tab)
{
	char    c1 = map[2 + (a * 7) + a];
	char    c2 = map[3 + (a * 7) + a];
	char    c3 = map[5 + (a * 7) + a];
	char    c4 = map[6 + (a * 7) + a];

	boat->c = map[a * 8];
	boat->x1 = c1 - 65;
	boat->x2 = c2 - 48 - 1;
	boat->y1 = c3 - 65;
	boat->y2 = c4 - 48 - 1;
	if (c1 == c3) {
		boat->size = (c4 - 48) - (c2 - 48) + 1;
		if ((tab = place_boat_v(tab, boat)) == NULL)
			return (NULL);
	} else {
		boat->size = (c3 - 48) - (c1 - 48) + 1;
		if ((tab = place_boat_h(tab, boat)) == NULL)
			return (NULL);
	}
	return (tab);
}
