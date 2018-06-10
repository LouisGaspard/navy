/*
** EPITECH PROJECT, 2018
** navy
** File description:
** navy
*/

#include "my.h"
#include "navy.h"

extern s_global *n;

void	handle_signal_miss(int signal)
{
	if (signal == SIGUSR1 && n->hit == 0)
		n->hit = 1;
	if (signal == SIGUSR2 && n->hit == 0)
		n->hit = 2;
}

void	hit_or_miss(void)
{
	struct sigaction sa;
	sigset_t block_mask;

	sigemptyset(&block_mask);
	sa.sa_mask = block_mask;
	sa.sa_flags = SA_SIGINFO;
	sa.sa_handler = &handle_signal_miss;
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		my_printf("Error: cannot handle SIGUSR1\n");
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
		my_printf("Error: cannot handle SIGUSR2\n");
	while (n->hit == 0)
		usleep(500);
}
