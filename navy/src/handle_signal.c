/*
** EPITECH PROJECT, 2018
** navy
** File description:
** navy
*/

#include "my.h"
#include "navy.h"

extern s_global *n;

void	handle_signal(int signal, siginfo_t *si, void *context)
{
	(void)context;
	n->mpid = si->si_pid;
	if (signal == SIGUSR1 && n->n1 == 0)
		n->n1 = 1;
	if (signal == SIGUSR1 && n->n1 == 1)
		n->attack[n->ma]++;
	if (signal == SIGUSR2 && n->ma != 2)
		n->ma++;
	if (signal == SIGUSR2 && n->ma == 2)
		n->n0 = 1;
}
