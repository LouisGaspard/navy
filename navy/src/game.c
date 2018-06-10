/*
** EPITECH PROJECT, 2018
** navy
** File description:
** navy
*/

#include "my.h"
#include "navy.h"

extern s_global *n;

int	my_game2(t_navy *navy)
{
	n->attack[0] = 'A';
	n->attack[1] = '0';
	my_printf("\nwaiting for enemy's attack...\n");
	my_receive();
	check_attack(n->attack, navy);
	if ((game_win(navy->map1)) == 14) {
		my_maps(navy);
		my_printf("\nEnemy won\n");
		return (1);
	}
	my_attack(navy);
	if ((game_win(navy->map2)) == 14) {
		my_maps(navy);
		my_printf("I won\n");
		return (0);
	}
	my_maps(navy);
	return (2);
}

int	my_game(t_navy *navy)
{
	n->attack[0] = 'A';
	n->attack[1] = '0';
	my_attack(navy);
	if ((game_win(navy->map2)) == 14) {
		my_maps(navy);
		my_printf("\nI won\n");
		return (0);
	}
	my_printf("\nwaiting for enemy's attack...\n");
	my_receive();
	check_attack(n->attack, navy);
	if ((game_win(navy->map1)) == 14) {
		my_maps(navy);
		my_printf("\nEnemy won\n");
		return (1);
	}
	my_maps(navy);
	return (2);
}
