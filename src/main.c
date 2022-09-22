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

	if (ac != 2)
		return (84);
	if (av[1][0] == '-' && av[1][1] == 'h') {
		display_h(&st);
		return (0);
	} else if (-1 == (file = open(av[1], O_RDONLY)))
		return (84);
	st.reset_map = 1;
	while (st.reset_map == 1)
		my_sokoban(av[1], &st);
	if (st.error_map == 1)
		return (84);
	else if (st.win == -1) {
		return (1);
	} else
		return (0);
}
