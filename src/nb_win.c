/*
** EPITECH PROJECT, 2017
** nb_win
** File description:
** ......
*/

#include "my.h"

void nb_win(st_sokoban *st)
{
	int i = 0;
	int j = 0;

	st->nb_win = 0;
	while (i < st->col + 1) {
		if (st->map[i][j] == 'O')
			st->nb_win++;
		if (j == st->ligne) {
			i++;
			j = 0;
		}
		j++;
	}
}
