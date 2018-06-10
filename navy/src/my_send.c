/*
** EPITECH PROJECT, 2018
** navy
** File description:
** navy
*/

#include "my.h"
#include "navy.h"

void	my_send(int nb1, int nb2, int pid)
{
	int     a = 0;

	while (a != nb1) {
		kill(pid, SIGUSR1);
		usleep(4000);
		a++;
	}
	kill(pid, SIGUSR2);
	a = 0;
	while (a != nb2) {
		kill(pid, SIGUSR1);
		usleep(4000);
		a++;
	}
	kill(pid, SIGUSR2);
}
