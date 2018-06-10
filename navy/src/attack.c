/*
** EPITECH PROJECT, 2018
** navy
** File description:
** navy
*/

#include "my.h"
#include "navy.h"

extern s_global *n;

char	**put_on_map(char **map, char *str, char c)
{
	int     x = ((str[0] - 'A') * 2);
	int     y = str[1] - '0' - 1;

	map[y][x] = c;
	return (map);
}

void	set_glob(void)
{
	n->attack[0] = 'A';
	n->attack[1] = '0';
	n->n0 = 0;
	n->ma = 0;
	n->n1 = 0;
}

int	my_attack(t_navy *navy)
{
	char    *str;

	my_printf("\nattack: ");
	str = get_next_line(0);
	if ((check_input(str)) == 84) {
		my_printf("wrong position");
		return (my_attack(navy));
	}
	set_glob();
	my_send(str[0] - 'A', str[1] - '0', n->mpid);
	n->hit = 0;
	hit_or_miss();
	if (n->hit == 1) {
		my_printf("%s: hit\n", str);
		navy->map2 = put_on_map(navy->map2, str, 'x');
	} else if (n->hit == 2) {
		my_printf("%s: missed\n", str);
		navy->map2 = put_on_map(navy->map2, str, 'o');
	}
	return (0);
}

int	check_attack(char *str, t_navy *navy)
{
	int     x = ((str[0] - 'A') * 2);
	int     y = str[1] - '0' - 1;

	if ((navy->map1[y][x] == '.') || (navy->map1[y][x] == 'o') ||
	(navy->map1[y][x] == 'x')) {
		my_printf("%s: missed\n", n->attack);
		if (navy->map1[y][x] != 'x')
			navy->map1 = put_on_map(navy->map1, str, 'o');
		kill(n->mpid, SIGUSR2);
	} else if (navy->map1[y][x] != '.') {
		my_printf("%s: hit\n", n->attack);
		navy->map1 = put_on_map(navy->map1, str, 'x');
		kill(n->mpid, SIGUSR1);
	}
	return (0);
}
