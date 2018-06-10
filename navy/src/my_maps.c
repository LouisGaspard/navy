/*
** EPITECH PROJECT, 2018
** navy
** File description:
** navy
*/

#include "my.h"
#include "navy.h"

void	my_maps(t_navy *navy)
{
	my_printf("\nmy positions:\n");
	my_print_map(navy->map1);
	my_printf("\nenemy's positions:\n");
	my_print_map(navy->map2);
}
