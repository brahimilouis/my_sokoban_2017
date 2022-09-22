/*
** EPITECH PROJECT, 2017
** verif_inside_map
** File description:
** .....
*/

#include "my.h"

int verif_inside_map(st_sokoban *st, int verif)
{
	int i = 0;
	int j = 0;

	while (i < st->col + 1) {
		if (st->map[i][j] != 'X' && st->map[i][j] != 'O'
		    && st->map[i][j] != '#' && st->map[i][j] != 'P'
		    && st->map[i][j] != ' ')
			verif = 1;
		j++;
		if (j > st->ligne) {
			j = 0;
			i++;
		}
	}
	return (verif);
}
