/*
** EPITECH PROJECT, 2018
** nav
** File description:
** navy
*/

#include "my.h"
#include "navy.h"

int	check_error(char *buffer)
{
	if (my_strlen(buffer) != 31)
		return (84);
	if ((check_sep(buffer)) == 84)
		return (84);
	if ((check_size(buffer)) == 84)
		return (84);
	if ((check_size_af(buffer)) == 84)
		return (84);
	return (0);
}

char	**create_map(void)
{
	char    **tab;

	tab = malloc_tab();
	tab = first_fill(tab);
	return (tab);
}

char	*read_map(char *map)
{
	int     fd = 0;
	char    *buffer;

	buffer = malloc(sizeof(char) * 33);
	fd = open(map, O_RDONLY);
	read(fd, buffer, 32);
	buffer[31] = '\0';
	return (buffer);
}

int	prepare_map(char *map, t_navy *navy)
{
	navy->buffer = read_map(map);
	if ((check_error(navy->buffer)) == 84) {
		my_printf("Error with map : %s\n", map);
		return (84);
	}
	navy->map1 = create_map();
	if ((navy->map1 = place_boat(navy->map1, navy->buffer)) == NULL)
		return (84);
	navy->map2 = create_map();
	return (0);
}
