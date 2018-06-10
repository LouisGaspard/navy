/*
** EPITECH PROJECT, 2018
** navy
** File description:
** navy
*/

#ifndef __NAVY_H_
#define __NAVY_H_

#include <fcntl.h>
#include <signal.h>

#define SIZE_BUFFER 1

typedef struct t_global
{
	int	mpid;
	int	n1;
	int	n0;
	int	ma;
	char	*attack;
	int	hit;
} s_global;

typedef struct
{
	char	*buffer;
	char	**map1;
	char	**map2;
	char	**map3;
	int	end;
} t_navy;

typedef struct
{
	int	size;
	int	x1;
	int	x2;
	int	y1;
	int	y2;
	char	c;
} t_boat;

char	*get_next_line(int fd);
int     check_size(char *buffer);
int     check_size_af(char *str);
int     check_sep(char *buffer);
int	check_error(char *buffer);
int	check_input(char *input);
int	is_sep(char c);
void    handle_signal(int signal, siginfo_t *si, void *context);
int	prepare_map(char *map, t_navy *navy);
void	my_maps(t_navy *navy);
void	get_sig_start(void);
int	my_game(t_navy *navy);
int	my_game2(t_navy *navy);
char	**size_boat(t_boat *boat, char *map, int a, char **tab);
char	**place_boat(char **tab, char *map);
char	**place_boat_v(char **tab, t_boat *boat);
char	**place_boat_h(char **tab, t_boat *boat);
char	**malloc_tab(void);
char	**first_fill(char **tab);
void	my_print_map(char **tab);
void	my_send(int a, int b, int pid);
void	hit_or_miss(void);
void	my_receive(void);
int	check_attack(char *str, t_navy *navy);
int	my_attack(t_navy *navy);
int	game_win(char **tab);

#endif
