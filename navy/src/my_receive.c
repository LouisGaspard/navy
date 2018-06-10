/*
** EPITECH PROJECT, 2018
** navy
** File description:
** navy
*/

#include "my.h"
#include "navy.h"

extern s_global *n;

void	my_receive(void)
{
	struct sigaction sa;
	sigset_t block_mask;

	n->n0 = 0;
	n->ma = 0;
	n->n1 = 0;
	sigemptyset(&block_mask);
	sa.sa_mask = block_mask;
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = handle_signal;
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		my_printf("Error: cannot handle SIGUSR1\n");
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
		my_printf("Error: cannot handle SIGUSR2\n");
	while (n->n0 == 0)
		usleep(500);
}
