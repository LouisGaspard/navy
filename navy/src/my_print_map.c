/*
** EPITECH PROJECT, 2018
** navy
** File description:
** navy
*/

#include "my.h"
#include "navy.h"

void	my_print_map(char **tab)
{
	int     a = 0;

	my_printf(" |A B C D E F G H\n");
	my_printf("-+---------------\n");
	while (a != 8) {
		my_printf("%d|%s\n", a + 1, tab[a]);
		a++;
	}
}
