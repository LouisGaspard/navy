/*
** EPITECH PROJECT, 2017
** PSU_2017_navy
** File description:
** PSU_2017_navy
*/

#include "my.h"
#include "navy.h"

s_global *n;

int	host_game(t_navy *navy, char *map)
{
	int	r_value = 0;

	if ((prepare_map(map, navy)) == 84)
		return (84);
	my_printf("my_pid: %d\n", getpid());
	my_printf("waiting for enemy connection...\n\n");
	get_sig_start();
	my_printf("enemy connected\n");
	my_maps(navy);
	while (navy->end == 0) {
		if ((r_value = my_game(navy)) != 2)
			return (r_value);
	}
	return (0);
}

int	join_game(t_navy *navy, int pid, char *map)
{
	int	r_value = 0;

	if ((prepare_map(map, navy)) == 84)
		return (84);
	kill(pid, SIGUSR1);
	my_printf("my_pid: %d\n", getpid());
	my_printf("successfully connected\n");
	my_maps(navy);
	while (navy->end == 0) {
		if ((r_value = my_game2(navy)) != 2)
			return (r_value);
	}
	return (0);
}

void    the_h_func(void)
{
	my_printf("\nUSAGE\n\t./navy [first_player_pid] navy_positions");
	my_printf("\nDESCRIPTION\n\tfirst_player_pid: ");
	my_printf("only for the 2nd player. pid of the first player.\n");
	my_printf("\tnavy_positions: file representing the positions ");
	my_printf("of the ships.\n");
}

int     main(int ac, char **av)
{
	t_navy  navy;

	if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
		the_h_func();
		return (0);
	}
	n = malloc(sizeof(s_global));
	n->attack = malloc(sizeof(char) * 3);
	n->attack[2] = 0;
	n->n1 = 0;
	n->n0 = 0;
	n->ma = 0;
	navy.end = 0;
	if (ac == 2) {
		return (host_game(&navy, av[1]));
	} else if (ac == 3) {
		if (my_str_isnum(av[1]) == 0)
			return (84);
		return (join_game(&navy, my_getnbr(av[1]), av[2]));
	}
	return (84);
}
