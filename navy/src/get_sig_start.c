/*
** EPITECH PROJECT, 2018
** navy
** File description:
** navy
*/

#include "my.h"
#include "navy.h"

extern s_global *n;

void	get_sig_start(void)
{
	struct sigaction sa;
	sigset_t block_mask;

	sigemptyset(&block_mask);
	sa.sa_mask = block_mask;
	sa.sa_sigaction = handle_signal;
	sa.sa_flags = SA_SIGINFO;
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		my_printf("Error: cannot handle SIGUSR1\n");
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
		my_printf("Error: cannot handle SIGUSR2\n");
	while (n->n1 == 0)
		usleep(3000);
}
