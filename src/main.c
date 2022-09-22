/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** ....
*/

#include "my.h"
#include <sys/stat.h>
#include <sys/types.h>

int main(int ac, char **av)
{
	int file;
	int len;
	st_sokoban st;

	st.map_win = 0;
	st.nb_map = 3;
	if (ac > 1 && av[1][0] == '-' && av[1][1] == 'h') {
		display_h(&st);
		return (0);
	}
	st.reset_map = 1;
	while (st.reset_map == 1 || st.nb_map > st.map_win) {
		choice_map(&st);
		if (st.win != -1 && st.reset_map != 1)
			st.map_win++;
	}
	if (st.error_map == 1)
		return (84);
	else if (st.win == -1)
		return (1);
	else
		return (0);
}
