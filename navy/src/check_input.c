/*
** EPITECH PROJECT, 2018
** navy
** File description:
** check input of the navy
*/

#include "my.h"
#include "navy.h"

int	check_sep(char *buffer)
{
	int	a = 4;
	int	b = 1;

	while (a <= 24) {
		if (buffer[a] != ':' && buffer[b] != ':')
			return (84);
		a += 8;
		b += 8;
	}
	return (0);
}

int	is_end(char a)
{
	char	b = '\0';
	char	c = '\n';

	if (a == b || a == c)
		return (1);
	return (0);
}

int	check_size(char	*buffer)
{
	char	*str = my_strdup("0000");
	int	a = 0;

	while (buffer[a]) {
		if (buffer[a] == '2' && is_end(buffer[a - 1]) == 1)
			str[0]++;
		if (buffer[a] == '3' && is_end(buffer[a - 1]) == 1)
			str[1]++;
		if (buffer[a] == '4' && is_end(buffer[a - 1]) == 1)
			str[2]++;
		if (buffer[a] == '5' && is_end(buffer[a - 1]) == 1)
			str[3]++;
		a++;
	}
	if (my_strcmp(str, "1111") == 0)
		return (0);
	return (84);
}

int	check_size_af(char *str)
{
	int	a = 0;
	int	nb1 = 0;
	int	nb2 = 0;
	int	size = 0;

	while (a != 4) {
		nb1 = str[a + 2 + (a * 7)] - 48 + str[3 + (a * 7) + a] - 48;
		nb2 = str[5 + (a * 7) + a] - 48 + str[6 + (a * 7) + a] - 48;
		size = nb2 - nb1 + 1;
		if (size != str[a * 7 + a] - 48)
			return (84);
		a++;
	}
	return (0);
}

int	check_input(char *input)
{
	if ((my_strlen(input)) != 2)
		return (84);
	if (input[0] < 'A' || input[0] > 'H')
		return (84);
	if (input[1] < '1' || input[1] > '8')
		return (84);
	return (0);
}
