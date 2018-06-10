/*
** EPITECH PROJECT, 2018
** navy
** File description:
** navy
*/

#include "my.h"
#include "navy.h"

int	game_win(char **map)
{
	int     a = 0;
	int     b = 0;
	int     count = 0;

	while (map[a]) {
		b = 0;
		while (map[a][b]) {
			if (map[a][b] == 'x')
				count++;
			b++;
		}
		a++;
	}
	return (count);
}
